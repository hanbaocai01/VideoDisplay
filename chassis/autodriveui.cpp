#include "autodriveui.h"
#include "ui_autodriveui.h"

AutoDriveUI::AutoDriveUI(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::AutoDriveUI)
{
    ui->setupUi(this);
}

AutoDriveUI::~AutoDriveUI()
{
    delete ui;
}

//标绘按钮槽函数
void AutoDriveUI::on_plottingBtn_clicked(bool checked)
{
    if (checked)
    {
        PlottingPop mPlottingPop;
        if (mPlottingPop.exec() == QDialog::Accepted)//使用分段规划
        {

        }
        else//基本自主驾驶
        {

        }
    }
}

//全局规划按钮槽函数
void AutoDriveUI::on_globalBtn_clicked()
{

}

//更多工具按钮槽函数
void AutoDriveUI::on_MoreBtn_clicked(bool checked)
{

}

//任务按钮槽函数
void AutoDriveUI::on_TaskBtn_clicked()
{

}

//退出按钮槽函数
void AutoDriveUI::on_exitBtn_clicked()
{
    this->hide();
    emit signal_AutoExit();
}

//放大按钮槽函数
void AutoDriveUI::on_magnifyBtn_clicked()
{

}

//缩小按钮槽函数
void AutoDriveUI::on_shrinkBtn_clicked()
{

}

//我的位置槽函数
void AutoDriveUI::on_locationBtn_clicked()
{

}
