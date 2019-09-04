#ifndef AUTODRIVEUI_H
#define AUTODRIVEUI_H

#include <QWidget>

#include "plottingpop.h"

namespace Ui {
class AutoDriveUI;
}

class AutoDriveUI : public QWidget
{
    Q_OBJECT

public:
    explicit AutoDriveUI(QWidget *parent = 0);
    ~AutoDriveUI();

private slots:
    void on_plottingBtn_clicked(bool checked);

    void on_globalBtn_clicked();

    void on_MoreBtn_clicked(bool checked);

    void on_TaskBtn_clicked();

    void on_exitBtn_clicked();

    void on_magnifyBtn_clicked();

    void on_shrinkBtn_clicked();

    void on_locationBtn_clicked();

private:
    Ui::AutoDriveUI *ui;
signals:
    void signal_AutoExit();
};

#endif // AUTODRIVEUI_H
