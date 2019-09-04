#include "chassisui.h"
#include "ui_chassisui.h"

chassisUI::chassisUI(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::chassisUI)
{
    cout << "Hello FFMPEG, av_version_info is : " << av_version_info() << endl;
    cout << "avutil_configuration is : " << avutil_configuration() << endl;

    ui->setupUi(this);
//    this->setAttribute(Qt::WA_TranslucentBackground);//窗体背景透明
    this->setWindowFlags(Qt::FramelessWindowHint);//窗体无边框
    //未使能widget
    ui->chassisDisableWidget->raise();
    ui->chassisDisableWidget->show();

    ui->middleWidget->hide();//更多二级菜单
    ui->changeloadWidget->hide();//载荷切换菜单
    load_flag = false;
    ui->tailgateWidget->hide();//尾门控制菜单
    manual_flag = false;
    ui->postureWidget->hide();
    posture_flag = false;

    ui->remoteBtnWidget->setParent(this);
    ui->remoteBtnWidget->hide();//遥控驾驶左侧按钮widget

    mTaskUI = new TaskUI(this);//任务
    mTaskUI->hide();

//    mchassisUDP = new chassisUDP();
    mvideoDisplay = new VideoDisplay(this);
    mvideoDisplay->getVideoData()->changeVideo(2);
    mvideoDisplay->videoStart();

//    //自主驾驶
//    mAutoDriveUI = new AutoDriveUI(this);
//    mAutoDriveUI->hide();
}

chassisUI::~chassisUI()
{
    delete ui;
}

//任务按钮槽函数
void chassisUI::on_TaskBtn_clicked()
{
    mTaskUI->raise();
    mTaskUI->show();
}

//自主驾驶按钮槽函数
void chassisUI::on_AutoBtn_clicked()
{
    //自主驾驶
    mAutoDriveUI = new AutoDriveUI(this);
    connect(mAutoDriveUI, SIGNAL(signal_AutoExit()), this, SLOT(slot_AutoExit()));
    mAutoDriveUI->raise();
    mAutoDriveUI->show();
}

//自主驾驶退出信号槽函数
void chassisUI::slot_AutoExit()
{
    disconnect(mAutoDriveUI, SIGNAL(signal_AutoExit()), this, SLOT(slot_AutoExit()));
    delete mAutoDriveUI;
}

//遥控驾驶按钮槽函数
void chassisUI::on_RemoteBtn_clicked()
{
    RemotePop mRemotePop;
    if (mRemotePop.exec() == QDialog::Accepted)//弹窗确定
    {
            ui->remoteBtnWidget->show();
            ui->leftBtnWidget->hide();
    }

}

//去使能按钮槽函数
void chassisUI::on_DisableBtn_clicked()
{
    ui->chassisDisableWidget->raise();
    ui->chassisDisableWidget->show();
}

//RCS复位按钮槽函数
void chassisUI::on_RCSResetBtn_clicked()
{
    mvideoDisplay->videoStop();
}

//警戒监视按钮槽函数
void chassisUI::on_MonitorBtn_clicked()
{

}

//多目相机按钮槽函数
void chassisUI::on_MultiBtn_clicked()
{

}

//针孔相机按钮槽函数
void chassisUI::on_PinholeBtn_clicked()
{

}

//更多按钮槽函数
void chassisUI::on_MoreBtn_clicked(bool checked)
{
    if (checked)
    {
        ui->middleWidget->show();
        ui->Remote_moreBtn->setChecked(true);
    }
    else
    {
        if (load_flag)//载荷切换按钮被按下
        {
            load_flag = false;
            ui->changeloadWidget->hide();
            ui->MoreBtn->setChecked(true);
            ui->Remote_moreBtn->setChecked(true);
            ui->middleWidget->show();
        }
        else if (manual_flag)//尾门控制按钮被按下
        {
            manual_flag = false;
            ui->tailgateWidget->hide();
            ui->MoreBtn->setChecked(true);
            ui->Remote_moreBtn->setChecked(true);
            ui->middleWidget->show();
        }
        else if (posture_flag)//车姿控制按钮被按下
        {
            posture_flag = false;
            ui->postureWidget->hide();
            ui->MoreBtn->setChecked(true);
            ui->Remote_moreBtn->setChecked(true);
            ui->middleWidget->show();
        }
        else
        {
            ui->middleWidget->hide();
        }

    }
}

//设置按钮槽函数
void chassisUI::on_setBtn_clicked()
{

}

//载荷切换按钮槽函数
void chassisUI::on_changeloadBtn_clicked()
{
    load_flag = true;
    ui->changeloadWidget->show();
    ui->middleWidget->hide();
}

//尾门控制按钮槽函数
void chassisUI::on_tailgateBtn_clicked()
{
    manual_flag = true;
    ui->tailgateWidget->show();
    ui->middleWidget->hide();
}

//车姿控制按钮槽函数
void chassisUI::on_postureBtn_clicked()
{
    posture_flag = true;
    ui->postureWidget->show();
    ui->middleWidget->hide();
}

//车姿控制-车姿使能按钮槽函数
void chassisUI::on_CZKZ_CZSNBtn_clicked(bool checked)
{
    if (checked)//按钮按下
    {
        ui->CZKZ_DDBtn->setEnabled(true);
        ui->CZKZ_ZXZXBtn->setEnabled(true);
        ui->CZKZ_PDPBtn->setEnabled(true);
        ui->CZKZ_YHGBtn->setEnabled(true);
        ui->CZKZ_PCZQBtn->setEnabled(true);
        ui->CZKZ_TZBtn->setEnabled(true);
    }
    else
    {
        ui->CZKZ_DDBtn->setChecked(false);
        ui->CZKZ_ZXZXBtn->setChecked(false);
        ui->CZKZ_PDPBtn->setChecked(false);
        ui->CZKZ_YHGBtn->setChecked(false);
        ui->CZKZ_PCZQBtn->setChecked(false);
        ui->CZKZ_TZBtn->setChecked(true);

        ui->CZKZ_DDBtn->setEnabled(false);
        ui->CZKZ_ZXZXBtn->setEnabled(false);
        ui->CZKZ_PDPBtn->setEnabled(false);
        ui->CZKZ_YHGBtn->setEnabled(false);
        ui->CZKZ_PCZQBtn->setEnabled(false);
        ui->CZKZ_TZBtn->setEnabled(false);
    }
}

//车姿控制-等待按钮槽函数
void chassisUI::on_CZKZ_DDBtn_clicked()
{

}

//车姿控制-中心转向按钮槽函数
void chassisUI::on_CZKZ_ZXZXBtn_clicked()
{

}

//车姿控制-爬陡坡按钮槽函数
void chassisUI::on_CZKZ_PDPBtn_clicked()
{

}

//车姿控制-越壕沟按钮槽函数
void chassisUI::on_CZKZ_YHGBtn_clicked()
{

}

//车姿控制-爬垂直墙按钮槽函数
void chassisUI::on_CZKZ_PCZQBtn_clicked()
{

}

//车姿控制-停止按钮槽函数
void chassisUI::on_CZKZ_TZBtn_clicked()
{

}

//尾门控制-尾门锁紧按钮槽函数
void chassisUI::on_manualLockBtn_clicked()
{

}

//尾门控制-解锁停止按钮槽函数
void chassisUI::on_manualStop1Btn_clicked()
{

}

//尾门控制-尾门解锁按钮槽函数
void chassisUI::on_manualUnlockBtn_clicked()
{

}

//尾门控制-尾门放下按钮槽函数
void chassisUI::on_manualReleaseBtn_clicked()
{

}

//尾门控制-收放停止按钮槽函数
void chassisUI::on_manualStop2Bnt_clicked()
{

}

//尾门控制-尾门收回按钮槽函数
void chassisUI::on_manualwithdrawBtn_clicked()
{

}

//载荷切换-小履带按钮槽函数
void chassisUI::on_pedrailBtn_clicked()
{

}

//载荷切换-无人机按钮槽函数
void chassisUI::on_UAVBtn_clicked()
{

}

//使能受控按钮槽函数
void chassisUI::on_enableBtn_clicked()
{
    ui->chassisDisableWidget->hide();
}

//断开连接按钮槽函数
void chassisUI::on_disconnectBtn_clicked()
{

}

//消息按钮槽函数
void chassisUI::on_MessageBtn_clicked()
{

}

//遥控驾驶-档位控制按钮槽函数
void chassisUI::on_Remote_gearsBtn_clicked(bool checked)
{

}

//遥控驾驶-终止按钮槽函数
void chassisUI::on_Remote_stopBtn_clicked()
{
    ui->remoteBtnWidget->hide();
    ui->leftBtnWidget->show();
}

//遥控驾驶-更多按钮槽函数
void chassisUI::on_Remote_moreBtn_clicked(bool checked)
{
    if (checked)
    {
        ui->middleWidget->show();
    }
    else
    {
        if (load_flag)//载荷切换按钮被按下
        {
            load_flag = false;
            ui->changeloadWidget->hide();
            ui->MoreBtn->setChecked(true);
            ui->Remote_moreBtn->setChecked(true);
            ui->middleWidget->show();
        }
        else if (manual_flag)//尾门控制按钮被按下
        {
            manual_flag = false;
            ui->tailgateWidget->hide();
            ui->MoreBtn->setChecked(true);
            ui->Remote_moreBtn->setChecked(true);
            ui->middleWidget->show();
        }
        else if (posture_flag)//车姿控制按钮被按下
        {
            posture_flag = false;
            ui->postureWidget->hide();
            ui->MoreBtn->setChecked(true);
            ui->Remote_moreBtn->setChecked(true);
            ui->middleWidget->show();
        }
        else
        {
            ui->middleWidget->hide();
        }

    }
}
