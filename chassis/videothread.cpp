#include "videothread.h"

videoThread::videoThread()
{
    videoStream=NULL;
}

void videoThread::run()
{
    int isOpened;
    bool isInterrupt = false;

    do
    {
        if (this->isInterruptionRequested())
        {
            return;
        }
        sleep(1);
        isOpened = videoStream->openUrlStream(_url);
        if (isOpened != -1)
        {
            isOpened = videoStream->setVideoDecoder();
        }
    }while(((isOpened != 0)) && (!this->isInterruptionRequested()) );

    do
    {
        if (this->isInterruptionRequested())
        {
            return;
        }
        if (videoStream->startDecode() != 0){
            videoStream->freeParam();
            do
            {
                sleep(1);
                isOpened = videoStream->openUrlStream(_url);
                if (isOpened != -1)
                {
                    isOpened = videoStream->setVideoDecoder();
                }
            }while(((isOpened != 0)) && (!this->isInterruptionRequested()) );
        }
    }while (!(this->isInterruptionRequested()));
}

//获取操作流的实例化对象
void videoThread::setVideoStream(VideoStream *pVideoStream)
{
    videoStream = pVideoStream;
}

//释放资源
void videoThread::releseResource()
{
    this->requestInterruption();
    this->wait();
    videoStream->freeParam();
}

//停止解码
void videoThread::stopDecode()
{
    this->releseResource();
}

//获取流地址,开始线程
void videoThread::getUrl(QString url)
{
    _url = url;
    this->start();
    return;
}



