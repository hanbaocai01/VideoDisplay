#include "videodata.h"

VideoData::VideoData(QWidget *parent) :  QWidget(parent)
{
    this->init();
}

VideoData::~VideoData()
{

}

uint32_t VideoData::getVideoWidth()
{
    return videostream->width;
}

uint32_t VideoData::getVideoHeight()
{
    return videostream->height;
}

void VideoData::changeVideo(int index)
{
    QString url;
    url = this->getChannelUrl(index);
    this->threadForVideo->getUrl(url);
}

//开始显示视频
void VideoData::start()
{
    timerVideo = new QTimer(this);
    timerVideo->setInterval(25); //40ms
    connect(timerVideo, SIGNAL(timeout()), this, SLOT(drawPicture()));
    timerVideo->setSingleShot(false);
    timerVideo->start();
}

//停止显示视频
void VideoData::stop()
{
    threadForVideo->stopDecode();
    timerVideo->stop();
    delete timerVideo;
    timerVideo = NULL;
}

//获取通道，拼接rtsp地址
QString VideoData::getChannelUrl(int channel)
{
    return QString("rtsp://admin:casky20170420@172.17.30.36:554/h265/ch")
                + QString::number(channel)
            + QString("/main/av_stream");

}

void VideoData::drawPicture()
{
    this->update();
}

void VideoData::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);
    if (videostream->picture == NULL)
    {
        return;
    }
    if (videostream->picture->data != NULL)
    {
        if (videostream->mutex.tryLock(1000))
        {
            if (NULL == videostream->picture)
            {
                videostream->mutex.unlock();
                return;
            }
            image = QImage(videostream->picture->data[0], videostream->width, videostream->height, QImage::Format_RGB888);
            if (!image.isNull())
            {
                        QRect target(0, 0, this->width(), this->height());
                        QRect source(0, 0, image.width(), image.height());
                        painter.drawImage(target, image, source);
            }
            videostream->mutex.unlock();
        }
    }
}

//
void VideoData::init()
{
    videostream = new VideoStream();
    threadForVideo = new videoThread();

    threadForVideo->setVideoStream(videostream);

}
