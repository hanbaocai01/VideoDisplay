/********************************************************************************
** Form generated from reading UI file 'autodriveui.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AUTODRIVEUI_H
#define UI_AUTODRIVEUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AutoDriveUI
{
public:
    QWidget *leftBtnWidget;
    QVBoxLayout *leftBtnLayout;
    QPushButton *plottingBtn;
    QPushButton *globalBtn;
    QPushButton *MoreBtn;
    QPushButton *TaskBtn;
    QPushButton *exitBtn;
    QWidget *rightBtnWidget;
    QVBoxLayout *rightBtnLayout;
    QPushButton *magnifyBtn;
    QPushButton *shrinkBtn;
    QPushButton *locationBtn;

    void setupUi(QWidget *AutoDriveUI)
    {
        if (AutoDriveUI->objectName().isEmpty())
            AutoDriveUI->setObjectName(QStringLiteral("AutoDriveUI"));
        AutoDriveUI->resize(1280, 720);
        AutoDriveUI->setMinimumSize(QSize(1280, 720));
        AutoDriveUI->setMaximumSize(QSize(1280, 720));
        AutoDriveUI->setAutoFillBackground(true);
        leftBtnWidget = new QWidget(AutoDriveUI);
        leftBtnWidget->setObjectName(QStringLiteral("leftBtnWidget"));
        leftBtnWidget->setGeometry(QRect(5, 100, 85, 440));
        leftBtnLayout = new QVBoxLayout(leftBtnWidget);
        leftBtnLayout->setSpacing(10);
        leftBtnLayout->setObjectName(QStringLiteral("leftBtnLayout"));
        leftBtnLayout->setContentsMargins(0, 0, 0, 0);
        plottingBtn = new QPushButton(leftBtnWidget);
        plottingBtn->setObjectName(QStringLiteral("plottingBtn"));
        plottingBtn->setMinimumSize(QSize(85, 80));
        plottingBtn->setStyleSheet(QStringLiteral("QPushButton {border-image:url(:/icon/gis/MapSideIcon/btn_dtbh_n.png)}QPushButton:pressed {border-image:url(:/icon/gis/MapSideIcon/btn_dtbh_p.png)}QPushButton:checked {border-image:url(:/icon/gis/MapSideIcon/btn_dtbh_s.png)}"));
        plottingBtn->setCheckable(true);

        leftBtnLayout->addWidget(plottingBtn);

        globalBtn = new QPushButton(leftBtnWidget);
        globalBtn->setObjectName(QStringLiteral("globalBtn"));
        globalBtn->setMinimumSize(QSize(85, 80));
        globalBtn->setStyleSheet(QStringLiteral("QPushButton {border-image:url(:/icon/gis/MapSideIcon/btn_qjgh_n.png)}QPushButton:pressed {border-image:url(:/icon/gis/MapSideIcon/btn_qjgh_p.png)}QPushButton:checked {border-image:url(:/icon/gis/MapSideIcon/btn_qjgh_s.png)}"));

        leftBtnLayout->addWidget(globalBtn);

        MoreBtn = new QPushButton(leftBtnWidget);
        MoreBtn->setObjectName(QStringLiteral("MoreBtn"));
        MoreBtn->setMinimumSize(QSize(85, 80));
        MoreBtn->setStyleSheet(QStringLiteral("QPushButton {border-image:url(:/icon/gis/MapSideIcon/btn_dtgd_n.png)}QPushButton:pressed {border-image:url(:/icon/gis/MapSideIcon/btn_dtgd_p.png)}QPushButton:checked {border-image:url(:/icon/gis/MapSideIcon/btn_dtgd_s.png)}"));
        MoreBtn->setCheckable(true);

        leftBtnLayout->addWidget(MoreBtn);

        TaskBtn = new QPushButton(leftBtnWidget);
        TaskBtn->setObjectName(QStringLiteral("TaskBtn"));
        TaskBtn->setMinimumSize(QSize(85, 80));
        TaskBtn->setStyleSheet(QStringLiteral("QPushButton {border-image:url(:/icon/gis/MapSideIcon/btn_rw_n.png)}QPushButton:pressed {border-image:url(:/icon/gis/MapSideIcon/btn_rw_p.png)}QPushButton:checked {border-image:url(:/icon/gis/MapSideIcon/btn_rw_s.png)}"));

        leftBtnLayout->addWidget(TaskBtn);

        exitBtn = new QPushButton(leftBtnWidget);
        exitBtn->setObjectName(QStringLiteral("exitBtn"));
        exitBtn->setMinimumSize(QSize(85, 80));
        exitBtn->setStyleSheet(QStringLiteral("QPushButton {border-image:url(:/icon/gis/task/btn_tc_n.png)}QPushButton:pressed {border-image:url(:/icon/gis/task/btn_tc_p.png)}QPushButton:checked {border-image:url(:/icon/gis/task/btn_tc_s.png)}"));

        leftBtnLayout->addWidget(exitBtn);

        rightBtnWidget = new QWidget(AutoDriveUI);
        rightBtnWidget->setObjectName(QStringLiteral("rightBtnWidget"));
        rightBtnWidget->setGeometry(QRect(1190, 100, 85, 260));
        rightBtnLayout = new QVBoxLayout(rightBtnWidget);
        rightBtnLayout->setSpacing(10);
        rightBtnLayout->setObjectName(QStringLiteral("rightBtnLayout"));
        rightBtnLayout->setContentsMargins(0, 0, 0, 0);
        magnifyBtn = new QPushButton(rightBtnWidget);
        magnifyBtn->setObjectName(QStringLiteral("magnifyBtn"));
        magnifyBtn->setMinimumSize(QSize(85, 80));
        magnifyBtn->setStyleSheet(QStringLiteral("QPushButton {border-image:url(:/icon/gis/MapSideIcon/btn_dtfd_n.png)}QPushButton:pressed {border-image:url(:/icon/gis/MapSideIcon/btn_dtfd_p.png)}QPushButton:checked {border-image:url(:/icon/gis/MapSideIcon/btn_dtfd_s.png)}"));

        rightBtnLayout->addWidget(magnifyBtn);

        shrinkBtn = new QPushButton(rightBtnWidget);
        shrinkBtn->setObjectName(QStringLiteral("shrinkBtn"));
        shrinkBtn->setMinimumSize(QSize(85, 80));
        shrinkBtn->setStyleSheet(QStringLiteral("QPushButton {border-image:url(:/icon/gis/MapSideIcon/btn_dtsxxs_n.png)}QPushButton:pressed {border-image:url(:/icon/gis/MapSideIcon/btn_dtsxxs_p.png)}QPushButton:checked {border-image:url(:/icon/gis/MapSideIcon/btn_dtsxxs_s.png)}"));

        rightBtnLayout->addWidget(shrinkBtn);

        locationBtn = new QPushButton(rightBtnWidget);
        locationBtn->setObjectName(QStringLiteral("locationBtn"));
        locationBtn->setMinimumSize(QSize(85, 80));
        locationBtn->setStyleSheet(QStringLiteral("QPushButton {border-image:url(:/icon/gis/MapSideIcon/btn_dtwdwz_n.png)}QPushButton:pressed {border-image:url(:/icon/gis/MapSideIcon/btn_dtwdwz_p.png)}QPushButton:checked {border-image:url(:/icon/gis/MapSideIcon/btn_dtwdwz_s.png)}"));

        rightBtnLayout->addWidget(locationBtn);


        retranslateUi(AutoDriveUI);

        QMetaObject::connectSlotsByName(AutoDriveUI);
    } // setupUi

    void retranslateUi(QWidget *AutoDriveUI)
    {
        AutoDriveUI->setWindowTitle(QApplication::translate("AutoDriveUI", "Form", Q_NULLPTR));
        plottingBtn->setText(QString());
        globalBtn->setText(QString());
        MoreBtn->setText(QString());
        TaskBtn->setText(QString());
        exitBtn->setText(QString());
        magnifyBtn->setText(QString());
        shrinkBtn->setText(QString());
        locationBtn->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class AutoDriveUI: public Ui_AutoDriveUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AUTODRIVEUI_H
