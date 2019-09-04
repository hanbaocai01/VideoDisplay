#ifndef CHASSISUI_H
#define CHASSISUI_H

#include <QWidget>
#include <QtDebug>
#include <iostream>
#include "autodriveui.h"
#include "taskui.h"
#include "remotepop.h"
#include "chassisudp.h"
#include "videodisplay.h"

extern "C"
{
    #include "libavutil/avutil.h"
}

using namespace std;

namespace Ui {
class chassisUI;
}

class chassisUI : public QWidget
{
    Q_OBJECT

public:
    explicit chassisUI(QWidget *parent = 0);
    ~chassisUI();

private slots:
    void on_TaskBtn_clicked();

    void on_AutoBtn_clicked();

    void on_RemoteBtn_clicked();

    void on_DisableBtn_clicked();

    void on_RCSResetBtn_clicked();

    void on_MoreBtn_clicked(bool checked);

    void on_MonitorBtn_clicked();

    void on_MultiBtn_clicked();

    void on_PinholeBtn_clicked();

    void on_setBtn_clicked();

    void on_changeloadBtn_clicked();

    void on_tailgateBtn_clicked();

    void on_postureBtn_clicked();

    void on_CZKZ_CZSNBtn_clicked(bool checked);

    void on_CZKZ_DDBtn_clicked();

    void on_CZKZ_ZXZXBtn_clicked();

    void on_CZKZ_PDPBtn_clicked();

    void on_CZKZ_YHGBtn_clicked();

    void on_CZKZ_PCZQBtn_clicked();

    void on_CZKZ_TZBtn_clicked();

    void on_manualLockBtn_clicked();

    void on_manualStop1Btn_clicked();

    void on_manualUnlockBtn_clicked();

    void on_manualReleaseBtn_clicked();

    void on_manualStop2Bnt_clicked();

    void on_manualwithdrawBtn_clicked();

    void on_pedrailBtn_clicked();

    void on_UAVBtn_clicked();

    void on_enableBtn_clicked();

    void on_disconnectBtn_clicked();

    void on_MessageBtn_clicked();

    void slot_AutoExit();

    void on_Remote_gearsBtn_clicked(bool checked);

    void on_Remote_stopBtn_clicked();

    void on_Remote_moreBtn_clicked(bool checked);

private:
    Ui::chassisUI *ui;
    AutoDriveUI* mAutoDriveUI;//自主驾驶对象
    bool load_flag;//载荷切换标志位
    bool manual_flag;//尾门控制标志位
    bool posture_flag;//车姿控制标志位
    TaskUI* mTaskUI;//任务对象
    chassisUDP* mchassisUDP;
    VideoDisplay* mvideoDisplay;//视频播放对象
};

#endif // CHASSISUI_H
