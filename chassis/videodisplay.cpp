#include "videodisplay.h"

#define	LCD_WIDTH	1280
#define	LCD_HEIGHT	720

#define H264_FRAME_BUFFER_SIZE 32768//0x8000//524288 //512KB
#define H264_BUFFER_QUEUE 25

VideoDisplay::VideoDisplay(QWidget *parent) : QWidget(parent)
{
    this->resize(LCD_WIDTH, LCD_HEIGHT);
    this->setAttribute(Qt::WA_TranslucentBackground);//设置背景透明
    videoData = new VideoData(this);
    isStart = 0;
    //视频连接后设置分辨率
    connect(this->getVideoData()->videostream, SIGNAL(videoConnected()), this, SLOT(setVideoSize()));
}

VideoDisplay::~VideoDisplay()
{
    delete videoData;
}

//视频开始
void VideoDisplay::videoStart()
{
    if (isStart == 0)
    {
        videoData->start();
        isStart = 1;
        qDebug("VideoDisplay change to start!\n");
    }
}

//视频停止
void VideoDisplay::videoStop()
{
    if (isStart == 1)
    {
        videoData->stop();
        isStart = 0;
        qDebug("VideoDisplay change to stop!\n");
    }
}

//获取接口实例化对象
VideoData *VideoDisplay::getVideoData()
{
    return videoData;
}

//视频位置设置
void VideoDisplay::changePosition(uint32_t pox, uint32_t poy)
{
    videoData->move(pox, poy);
}

//设置分辨率
void VideoDisplay::setVideoSize()
{
    qDebug() << "setDuomuSize videoWidth()" <<videoData->getVideoWidth();
    if (videoData->getVideoWidth())
    {
        int videoScreenWidth = videoData->getVideoWidth()*720/videoData->getVideoHeight();
        videoData->resize(videoScreenWidth, 720);
        this->changePosition((1280-videoScreenWidth)/2, 0);
        qDebug() << "setDuomuSize resize " <<videoScreenWidth<<"*720";
        qDebug() << "setDuomuSize pos " <<(1280-videoScreenWidth)/2<<",0";

    }
}
