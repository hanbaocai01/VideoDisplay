#ifndef REMOTEPOP_H
#define REMOTEPOP_H

#include <QDialog>

namespace Ui {
class RemotePop;
}

class RemotePop : public QDialog
{
    Q_OBJECT

public:
    explicit RemotePop(QWidget *parent = 0);
    ~RemotePop();

private slots:
    void on_SpeedSubBtn_clicked();

    void on_SpeedAddBtn_clicked();

    void on_MixtureBtn_clicked();

    void on_PureBtn_clicked();


    void on_OKBtn_clicked();

    void on_CancelBtn_clicked();

private:
    Ui::RemotePop *ui;
};

#endif // REMOTEPOP_H
