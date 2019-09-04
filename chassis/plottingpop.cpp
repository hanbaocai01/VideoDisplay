#include "plottingpop.h"
#include "ui_plottingpop.h"

PlottingPop::PlottingPop(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::PlottingPop)
{
    ui->setupUi(this);
    this->setWindowFlags(Qt::FramelessWindowHint);//窗体无边框
}

PlottingPop::~PlottingPop()
{
    delete ui;
}

//是按钮槽函数
void PlottingPop::on_pushButton_clicked()
{
    done(Accepted);
}

//否按钮槽函数
void PlottingPop::on_pushButton_2_clicked()
{
    done(Rejected);
}
