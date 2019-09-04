#ifndef TASKUI_H
#define TASKUI_H

#include <QWidget>

namespace Ui {
class TaskUI;
}

class TaskUI : public QWidget
{
    Q_OBJECT

public:
    explicit TaskUI(QWidget *parent = 0);
    ~TaskUI();

private slots:
    void on_backBtn_clicked();

    void on_previewBtn_clicked();

    void on_deleteBtn_clicked();

private:
    Ui::TaskUI *ui;
};

#endif // TASKUI_H
