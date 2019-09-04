#ifndef VIDEODISPLAY_H
#define VIDEODISPLAY_H
//视频操作实例类
#include <QWidget>
#include "videodata.h"

class VideoDisplay : public QWidget
{
    Q_OBJECT
public:
    VideoDisplay(QWidget *parent = 0);
    ~VideoDisplay();
    void videoStart();	//视频开始
    void videoStop();	//视频结束
    VideoData * getVideoData();
    void changePosition(uint32_t pox, uint32_t poy);	//视频位置设置

public slots:
    void setVideoSize();

private:
    VideoData *videoData;
    bool isStart;
};

#endif // VIDEODISPLAY_H
