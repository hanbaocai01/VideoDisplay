#include "remotepop.h"
#include "ui_remotepop.h"

RemotePop::RemotePop(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::RemotePop)
{
    ui->setupUi(this);
}

RemotePop::~RemotePop()
{
    delete ui;
}

//滑动条减按钮槽函数
void RemotePop::on_SpeedSubBtn_clicked()
{

}

//滑动条加按钮槽函数
void RemotePop::on_SpeedAddBtn_clicked()
{

}

//混合动力按钮槽函数
void RemotePop::on_MixtureBtn_clicked()
{

}

//纯电动力按钮槽函数
void RemotePop::on_PureBtn_clicked()
{

}

//确定按钮槽函数
void RemotePop::on_OKBtn_clicked()
{
    done(Accepted);
}

//取消按钮槽函数
void RemotePop::on_CancelBtn_clicked()
{
    done(Rejected);
}
