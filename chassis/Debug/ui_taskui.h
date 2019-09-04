/********************************************************************************
** Form generated from reading UI file 'taskui.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TASKUI_H
#define UI_TASKUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TaskUI
{
public:
    QPushButton *backBtn;
    QPushButton *previewBtn;
    QPushButton *deleteBtn;
    QTableWidget *TaskTableWidget;

    void setupUi(QWidget *TaskUI)
    {
        if (TaskUI->objectName().isEmpty())
            TaskUI->setObjectName(QStringLiteral("TaskUI"));
        TaskUI->resize(1280, 720);
        TaskUI->setAutoFillBackground(true);
        TaskUI->setStyleSheet(QStringLiteral("/*background-image:url(:/icon/vm/dashboard/bg_1.png)"));
        backBtn = new QPushButton(TaskUI);
        backBtn->setObjectName(QStringLiteral("backBtn"));
        backBtn->setGeometry(QRect(5, 150, 85, 80));
        backBtn->setAutoFillBackground(false);
        backBtn->setStyleSheet(QStringLiteral("QPushButton {border-image:url(:/icon/gis/task/btn_dwfh_n.png)}QPushButton:pressed {border-image:url(:/icon/gis/task/btn_dwfh_p.png)}QPushButton:checked {border-image:url(:/icon/gis/task/btn_dwfh_s.png)}"));
        previewBtn = new QPushButton(TaskUI);
        previewBtn->setObjectName(QStringLiteral("previewBtn"));
        previewBtn->setGeometry(QRect(1190, 150, 85, 80));
        previewBtn->setStyleSheet(QLatin1String("QPushButton {border-image:url(:/icon/gis/task/btn_yl_n.png)}\n"
"QPushButton:pressed {border-image:url(:/icon/gis/task/btn_yl_p.png)}QPushButton:checked {border-image:url(:/icon/gis/task/btn_yl_s.png)}"));
        deleteBtn = new QPushButton(TaskUI);
        deleteBtn->setObjectName(QStringLiteral("deleteBtn"));
        deleteBtn->setGeometry(QRect(1190, 240, 85, 80));
        deleteBtn->setStyleSheet(QStringLiteral("QPushButton {border-image:url(:/icon/gis/task/btn_sc_n.png)}QPushButton:pressed {border-image:url(:/icon/gis/task/btn_sc_p.png)}QPushButton:checked {border-image:url(:/icon/gis/task/btn_sc_s.png)}"));
        TaskTableWidget = new QTableWidget(TaskUI);
        if (TaskTableWidget->columnCount() < 4)
            TaskTableWidget->setColumnCount(4);
        QFont font;
        font.setPointSize(22);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        __qtablewidgetitem->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem->setFont(font);
        TaskTableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        __qtablewidgetitem1->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem1->setFont(font);
        TaskTableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        __qtablewidgetitem2->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem2->setFont(font);
        TaskTableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QFont font1;
        font1.setPointSize(22);
        font1.setBold(false);
        font1.setWeight(50);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        __qtablewidgetitem3->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem3->setFont(font1);
        TaskTableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        TaskTableWidget->setObjectName(QStringLiteral("TaskTableWidget"));
        TaskTableWidget->setGeometry(QRect(100, 50, 1082, 670));
        TaskTableWidget->setAutoFillBackground(true);
        TaskTableWidget->setStyleSheet(QLatin1String("/*background-color: balck\n"
""));
        TaskTableWidget->setEditTriggers(QAbstractItemView::AllEditTriggers);
        TaskTableWidget->setSelectionMode(QAbstractItemView::SingleSelection);
        TaskTableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
        TaskTableWidget->setTextElideMode(Qt::ElideRight);
        TaskTableWidget->setColumnCount(4);
        TaskTableWidget->horizontalHeader()->setDefaultSectionSize(270);
        TaskTableWidget->verticalHeader()->setVisible(true);
        TaskTableWidget->verticalHeader()->setCascadingSectionResizes(false);
        TaskTableWidget->verticalHeader()->setDefaultSectionSize(30);
        TaskTableWidget->verticalHeader()->setHighlightSections(false);
        TaskTableWidget->verticalHeader()->setMinimumSectionSize(25);
        TaskTableWidget->verticalHeader()->setProperty("showSortIndicator", QVariant(false));
        TaskTableWidget->verticalHeader()->setStretchLastSection(false);

        retranslateUi(TaskUI);

        QMetaObject::connectSlotsByName(TaskUI);
    } // setupUi

    void retranslateUi(QWidget *TaskUI)
    {
        TaskUI->setWindowTitle(QApplication::translate("TaskUI", "Form", Q_NULLPTR));
        backBtn->setText(QString());
        previewBtn->setText(QString());
        deleteBtn->setText(QString());
        QTableWidgetItem *___qtablewidgetitem = TaskTableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("TaskUI", "\344\273\273\345\212\241\347\274\226\345\217\267", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1 = TaskTableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("TaskUI", "\346\216\245\346\224\266\346\227\266\351\227\264", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem2 = TaskTableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("TaskUI", "\344\273\273\345\212\241\347\212\266\346\200\201", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem3 = TaskTableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("TaskUI", "\344\273\273\345\212\241\345\206\205\345\256\271", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class TaskUI: public Ui_TaskUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TASKUI_H
