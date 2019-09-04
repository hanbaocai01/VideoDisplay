#ifndef VIDEOTHREAD_H
#define VIDEOTHREAD_H
//线程调用接口实现视频处理业务逻辑
#include <QThread>
#include <QMessageBox>
#include <QDebug>
#include "videostream.h"

class videoThread : QThread
{
    Q_OBJECT
public:
    videoThread();

    void run();
    void setVideoStream(VideoStream *pVideoStream);
    void releseResource();
    void stopDecode();
    void getUrl(QString url);

private:
    QString _url;
    VideoStream *videoStream;
};

#endif // VIDEOTHREAD_H
