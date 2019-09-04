#include "taskui.h"
#include "ui_taskui.h"

TaskUI::TaskUI(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::TaskUI)
{
    ui->setupUi(this);
}

TaskUI::~TaskUI()
{
    delete ui;
}

//返回按钮槽函数
void TaskUI::on_backBtn_clicked()
{
    this->hide();
}

//预览按钮槽函数
void TaskUI::on_previewBtn_clicked()
{

}

//删除按钮槽函数
void TaskUI::on_deleteBtn_clicked()
{

}
