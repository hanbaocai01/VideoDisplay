#ifndef PLOTTINGPOP_H
#define PLOTTINGPOP_H

#include <QDialog>

namespace Ui {
class PlottingPop;
}

class PlottingPop : public QDialog
{
    Q_OBJECT

public:
    explicit PlottingPop(QWidget *parent = 0);
    ~PlottingPop();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::PlottingPop *ui;
};

#endif // PLOTTINGPOP_H
