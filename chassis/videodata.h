#ifndef VIDEODATA_H
#define VIDEODATA_H
//视频具体操作接口类，显示类，实例化线程类和接口实现类，继承OpenGL

#include <QWidget>
#include <QOpenGLWidget>
#include <QTimer>
#include <QImage>
#include <QPainter>
#include "videothread.h"
#include "videostream.h"

#define H264_BUFFER_QUEUE 25
typedef int                int32_t;
typedef unsigned int       uint32_t;

class VideoData : public QWidget
{
    Q_OBJECT
public:
    VideoData(QWidget *parent);
    ~VideoData();

    videoThread *threadForVideo;
    VideoStream *videostream;

    uint32_t getVideoWidth();
    uint32_t getVideoHeight();
    void changeVideo(int index);


    void start();	//视频开始函数
    void stop();	//视频结束函数

public slots :

    void drawPicture();

protected:
    void paintEvent(QPaintEvent *event) Q_DECL_OVERRIDE;	//视频paint函数

private:
    QImage image;	//视频图片
    QTimer *timerVideo;	//QTimer

    void init();
    QString getChannelUrl(int channel);

};

#endif // VIDEODATA_H
