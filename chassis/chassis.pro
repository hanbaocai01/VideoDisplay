#-------------------------------------------------
#
# Project created by QtCreator 2019-07-17T17:58:51
#
#-------------------------------------------------

QT       += core gui
QT       += network
QT       += sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = chassis
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

win32 {
INCLUDEPATH += $$PWD/ffmpeg-4.0.2-win32-dev/include
LIBS += $$PWD/ffmpeg-4.0.2-win32-dev/lib/avformat.lib   \
        $$PWD/ffmpeg-4.0.2-win32-dev/lib/avcodec.lib    \
        $$PWD/ffmpeg-4.0.2-win32-dev/lib/avdevice.lib   \
        $$PWD/ffmpeg-4.0.2-win32-dev/lib/avfilter.lib   \
        $$PWD/ffmpeg-4.0.2-win32-dev/lib/avutil.lib     \
        $$PWD/ffmpeg-4.0.2-win32-dev/lib/postproc.lib   \
        $$PWD/ffmpeg-4.0.2-win32-dev/lib/swresample.lib \
        $$PWD/ffmpeg-4.0.2-win32-dev/lib/swscale.lib
}

SOURCES += \
        main.cpp \
        chassisui.cpp \
    autodriveui.cpp \
    plottingpop.cpp \
    taskui.cpp \
    remotepop.cpp \
    chassisudp.cpp \
    videothread.cpp \
    videodisplay.cpp \
    videodata.cpp \
    videostream.cpp

HEADERS += \
        chassisui.h \
    autodriveui.h \
    plottingpop.h \
    taskui.h \
    remotepop.h \
    chassisudp.h \
    videothread.h \
    videodisplay.h \
    videodata.h \
    videostream.h \
    dbconnection.h

FORMS += \
        chassisui.ui \
    autodriveui.ui \
    plottingpop.ui \
    taskui.ui \
    remotepop.ui

RESOURCES += \
    imageresources.qrc \
    imageresources1.qrc
