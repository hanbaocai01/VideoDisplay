#include "videostream.h"
#include <QDebug>

VideoStream::VideoStream()
{
    picture = NULL;
    pCodecCtx = NULL;
    videoStream = -1;
    packet = NULL;
    width = 0;
    height = 0;
    pFormatCtx = NULL;
    this->streamInit();
}

VideoStream::~VideoStream()
{

}

//初始化ffmpeg
int VideoStream::streamInit()
{
    av_register_all();
    if (avformat_network_init())
    {
        qDebug() << "Init InterNet Error";
        return -1;
    }
    else
    {
        qDebug() << "ffmpeg Init InterNet success";
    }
    return 0;
}

//打开流地址，相应初始化
int VideoStream::openUrlStream(QString url)
{
    int tmp = 0;
    int retVal = 0;// to get return value of functions.

    picture = new AVPicture();
    pCodecCtx = NULL;
    videoStream = -1;
    picture->data[0] = NULL;
    packet = new AVPacket();

    list = url;
    pFormatCtx = avformat_alloc_context();
    if (NULL == pFormatCtx)
    {
        qDebug() << "avformat_alloc_context() failed!";
        retVal = -1;
    }

    AVDictionary* opts = NULL;
    //暂不考虑rtp
    av_dict_set(&opts, "stimeout", "2000000", 0);
    av_dict_set(&opts, "rtsp_transport", "udp", 0);

    tmp = avformat_open_input(&pFormatCtx, url.toStdString().c_str(), NULL, &opts);
    if (tmp != 0)
    {
        qDebug()<< "avformat_open_input() failed!";
        retVal = -1;
        return -1;
    }

    pFrame = av_frame_alloc();
    if (NULL == pFrame)
    {
        qDebug() << "av_frame_alloc() failed!";
        retVal = -1;
    }

    if (retVal == -1)
    {
        list.clear();
    }

    return retVal;

}

//公共接口，返回调用解码函数返回值
int VideoStream::startDecode()
{
    return streamDecode();
}

//取流，调用前必须先调用openUrlStream(QString url)
int VideoStream::setVideoDecoder()
{
    unsigned int i = 0;
    int retVal = 0;// to get return value of functions.
    AVCodec *pCodec;

    retVal = avformat_find_stream_info(pFormatCtx, NULL);
    if (retVal < 0)
    {
        qDebug() << "Unable to get stream info";
        return -1;
    }

    videoStream = -1;
    for (i = 0; i < pFormatCtx->nb_streams; i++)
    {
        if (pFormatCtx->streams[i]->codec->codec_type == AVMEDIA_TYPE_VIDEO)
        {
            videoStream = i;
            break;
        }
    }
    if (videoStream == -1)
    {
        qDebug() << "Unable to find video stream";
        return -1;
    }

    pCodecCtx = pFormatCtx->streams[videoStream]->codec;

    width = pCodecCtx->width;
    height = pCodecCtx->height;
    qDebug() << "video size width:" << width;
    qDebug() << "video size height:" << height;
    emit videoConnected();//发送信号，设置分辨率

    avpicture_alloc(picture, AV_PIX_FMT_RGB24, width, height);
    qDebug() << " pCodecCtx->codec_id " << hex << pCodecCtx->codec_id;
    pCodec = avcodec_find_decoder(pCodecCtx->codec_id);
    if (pCodec == NULL)
    {
        qDebug()<<"Unsupported codec";
        return -6;
    }

    pSwsCtx = sws_getContext(width, height, AV_PIX_FMT_YUV420P, width,
                 height, AV_PIX_FMT_RGB24, SWS_FAST_BILINEAR, 0, 0, 0); //初始化一个SwsContext

    if (avcodec_open2(pCodecCtx, pCodec, NULL) < 0)
    {
        qDebug( )<<"Unable to open codec";
        return -7;
    }

    return 0;

}

//释放资源
int VideoStream::freeParam()
{
    if (mutex.tryLock(1000))
    {

        if (NULL != pCodecCtx){
            avcodec_close(pCodecCtx);
            pCodecCtx = NULL;
        }

        if (NULL != pFormatCtx){
        avformat_close_input(&pFormatCtx);
        }

        if (pFormatCtx != NULL)
        {
            avformat_free_context(pFormatCtx);
            pFormatCtx = NULL;
        }

        if (pFrame != NULL)
        {
            av_frame_free(&pFrame);
            pFrame = NULL;
        }

        if (packet != NULL)
        {
            av_free_packet(packet);
            packet = NULL;
        }

        if (picture != NULL)
        {
            avpicture_free(picture);
            picture = NULL;
        }

        if (pSwsCtx != NULL)
        {
            sws_freeContext(pSwsCtx);
            pSwsCtx = NULL;
        }
        mutex.unlock();

        if (!list.isEmpty())
            list.clear();

        return 0;
    }
}

//解码、格式转换
int VideoStream::streamDecode()
{
    int frameFinished=0;

    if (av_read_frame(pFormatCtx, packet) == 0)
    {
         if (packet->stream_index == videoStream)
         {
              avcodec_decode_video2(pCodecCtx, pFrame, &frameFinished, packet);
             if (frameFinished)
             {
                 if(width == 0 || height == 0)
                 {
                     qDebug() << "av_read_frame size is 0";
                     return -1;
                 }

                 mutex.lock();
                 //sws_scale()是用于转换像素的函数。缩放格式转换
                 int rs = sws_scale(pSwsCtx, (const uint8_t* const *)pFrame->data,
                                    pFrame->linesize, 0, height, picture->data, picture->linesize);

//                 if (pFrame->key_frame == 1)//提取关键帧
//                 if (pFrame->pict_type == AV_PICTURE_TYPE_I)//提取I帧
//                 {
//                    QImage image = QImage(picture->data[0], width, height, QImage::Format_RGB888);
//                    image.save("C:\\Users\\Administrator\\Desktop\\1.png");
//                 }
                 mutex.unlock();

                 if(rs == -1)
                 {
                     qDebug()<<"__________Can open to change to des img_____________\n";
                     return -1;
                 }
             }
         }
         av_packet_unref(packet); //每次解码完一帧结束后需要将packet的数据域引用使用这个api减少，该操作会将减少引用的数据域释放
         return 0;
    }
    else
    {
        return -1;
    }
}

