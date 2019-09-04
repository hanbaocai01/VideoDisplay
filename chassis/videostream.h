#ifndef VIDEOSTREAM_H
#define VIDEOSTREAM_H
//视频接口具体实现类

#include <QObject>
#include <QString>
#include <QMutex>
#include <QImage>
#include <QTime>
#include <QImage>

extern "C"
{
#include "libavcodec/avcodec.h"
#include "libavformat/avformat.h"
#include "libswscale/swscale.h"
#include "libavutil/avutil.h"
#include "libavutil/imgutils.h"
#include "libavutil/opt.h"
#include "libavutil/mathematics.h"
#include "libavutil/samplefmt.h"
#include "libavutil/pixfmt.h"
}

class VideoStream : public QObject
{
    Q_OBJECT
    friend class VideoData;
public:
    VideoStream();
    virtual ~VideoStream();

    int streamInit();
    int openUrlStream(QString url);
    int startDecode();
    int setVideoDecoder();
    int freeParam();

signals:
    void videoConnected();

private:
    int streamDecode();

private:
    AVFormatContext *pFormatCtx = NULL;
    AVCodecContext *pCodecCtx = NULL;
    AVFrame *pFrame = NULL;
    AVPacket *packet = NULL;
    AVPicture  *picture = NULL;
    SwsContext * pSwsCtx = NULL;
    int videoStream;
    int width;
    int height;
    int num;
    QMutex mutex;
    QString list;

};

#endif // VIDEOSTREAM_H
