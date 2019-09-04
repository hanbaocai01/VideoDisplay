/********************************************************************************
** Form generated from reading UI file 'chassisui.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHASSISUI_H
#define UI_CHASSISUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_chassisUI
{
public:
    QWidget *leftBtnWidget;
    QVBoxLayout *leftBtnlayout;
    QPushButton *TaskBtn;
    QPushButton *AutoBtn;
    QPushButton *RemoteBtn;
    QPushButton *DisableBtn;
    QPushButton *RCSResetBtn;
    QPushButton *MoreBtn;
    QWidget *rightBtnWidget;
    QVBoxLayout *rightBtnlayout;
    QPushButton *MonitorBtn;
    QPushButton *MessageBtn;
    QPushButton *MultiBtn;
    QPushButton *PinholeBtn;
    QWidget *middleWidget;
    QWidget *middleBtnWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *setBtn;
    QPushButton *changeloadBtn;
    QPushButton *tailgateBtn;
    QPushButton *postureBtn;
    QLabel *middleTittleLabel;
    QWidget *changeloadWidget;
    QWidget *chageloadBtnWidget;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pedrailBtn;
    QPushButton *UAVBtn;
    QLabel *changeloadTittleLabel;
    QWidget *tailgateWidget;
    QWidget *tailgateBtnWidget;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *manualLockBtn;
    QPushButton *manualStop1Btn;
    QPushButton *manualUnlockBtn;
    QPushButton *manualReleaseBtn;
    QPushButton *manualStop2Bnt;
    QPushButton *manualwithdrawBtn;
    QLabel *tailgateTittlelabel;
    QWidget *postureWidget;
    QWidget *postureBtnWidget;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *CZKZ_CZSNBtn;
    QPushButton *CZKZ_DDBtn;
    QPushButton *CZKZ_ZXZXBtn;
    QPushButton *CZKZ_PDPBtn;
    QPushButton *CZKZ_YHGBtn;
    QPushButton *CZKZ_PCZQBtn;
    QPushButton *CZKZ_TZBtn;
    QLabel *postureTittleLabel;
    QWidget *chassisDisableWidget;
    QWidget *chassisDisableBtnWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *enableBtn;
    QPushButton *disconnectBtn;
    QWidget *remoteBtnWidget;
    QVBoxLayout *verticalLayout_2;
    QPushButton *Remote_gearsBtn;
    QPushButton *Remote_stopBtn;
    QSpacerItem *verticalSpacer;
    QPushButton *Remote_moreBtn;
    QButtonGroup *manualreleaseBtnGroup;
    QButtonGroup *postureBtnGroup;
    QButtonGroup *manualLockBtnGroup;

    void setupUi(QWidget *chassisUI)
    {
        if (chassisUI->objectName().isEmpty())
            chassisUI->setObjectName(QStringLiteral("chassisUI"));
        chassisUI->setWindowModality(Qt::NonModal);
        chassisUI->resize(1280, 720);
        chassisUI->setMinimumSize(QSize(0, 0));
        chassisUI->setMaximumSize(QSize(1280, 720));
        chassisUI->setContextMenuPolicy(Qt::NoContextMenu);
        chassisUI->setAutoFillBackground(true);
        leftBtnWidget = new QWidget(chassisUI);
        leftBtnWidget->setObjectName(QStringLiteral("leftBtnWidget"));
        leftBtnWidget->setEnabled(true);
        leftBtnWidget->setGeometry(QRect(5, 100, 85, 530));
        leftBtnWidget->setLayoutDirection(Qt::LeftToRight);
        leftBtnlayout = new QVBoxLayout(leftBtnWidget);
        leftBtnlayout->setSpacing(10);
        leftBtnlayout->setContentsMargins(11, 11, 11, 11);
        leftBtnlayout->setObjectName(QStringLiteral("leftBtnlayout"));
        leftBtnlayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        leftBtnlayout->setContentsMargins(0, 0, 0, 0);
        TaskBtn = new QPushButton(leftBtnWidget);
        TaskBtn->setObjectName(QStringLiteral("TaskBtn"));
        TaskBtn->setMinimumSize(QSize(85, 80));
        TaskBtn->setStyleSheet(QStringLiteral("QPushButton {border-image:url(:/icon/vm/dashboard/buttons/newButton/Left/btn_rw_n.png)}QPushButton:pressed {border-image:url(:/icon/vm/dashboard/buttons/newButton/Left/btn_rw_p.png)}QPushButton:checked {border-image:url(:/icon/vm/dashboard/buttons/newButton/Left/btn_rw_s.png)}"));
        TaskBtn->setCheckable(false);

        leftBtnlayout->addWidget(TaskBtn);

        AutoBtn = new QPushButton(leftBtnWidget);
        AutoBtn->setObjectName(QStringLiteral("AutoBtn"));
        AutoBtn->setMinimumSize(QSize(85, 80));
        AutoBtn->setStyleSheet(QLatin1String("QPushButton {border-image:url(:/icon/vm/dashboard/buttons/newButton/Left/btn_zzjs_n.png)}QPushButton:pressed {border-image:url(:/icon/vm/dashboard/buttons/newButton/Left/btn_zzjs_p.png)}QPushButton:checked {border-image:url(:/icon/vm/dashboard/buttons/newButton/Left/btn_zzjs_s.png)}\n"
""));
        AutoBtn->setCheckable(false);
        AutoBtn->setAutoExclusive(false);

        leftBtnlayout->addWidget(AutoBtn);

        RemoteBtn = new QPushButton(leftBtnWidget);
        RemoteBtn->setObjectName(QStringLiteral("RemoteBtn"));
        RemoteBtn->setMinimumSize(QSize(85, 80));
        RemoteBtn->setStyleSheet(QStringLiteral("QPushButton {border-image:url(:/icon/vm/dashboard/buttons/newButton/Left/btn_ykjs_n.png)}QPushButton:pressed {border-image:url(:/icon/vm/dashboard/buttons/newButton/Left/btn_ykjs_p.png)}QPushButton:checked {border-image:url(:/icon/vm/dashboard/buttons/newButton/Left/btn_ykjs_s.png)}"));
        RemoteBtn->setCheckable(false);
        RemoteBtn->setAutoExclusive(false);

        leftBtnlayout->addWidget(RemoteBtn);

        DisableBtn = new QPushButton(leftBtnWidget);
        DisableBtn->setObjectName(QStringLiteral("DisableBtn"));
        DisableBtn->setMinimumSize(QSize(85, 80));
        DisableBtn->setStyleSheet(QStringLiteral("QPushButton {border-image:url(:/new/src/icon/vm/dashboard/SetWndBtns/btn_qsn_n.png)}QPushButton:pressed {border-image:url(:/new/src/icon/vm/dashboard/SetWndBtns/btn_qsn_p.png)}QPushButton:checked {border-image:url(:/new/src/icon/vm/dashboard/SetWndBtns/btn_qsn_s.png)}"));
        DisableBtn->setCheckable(false);
        DisableBtn->setAutoExclusive(false);

        leftBtnlayout->addWidget(DisableBtn);

        RCSResetBtn = new QPushButton(leftBtnWidget);
        RCSResetBtn->setObjectName(QStringLiteral("RCSResetBtn"));
        RCSResetBtn->setEnabled(true);
        RCSResetBtn->setMinimumSize(QSize(85, 80));
        RCSResetBtn->setStyleSheet(QStringLiteral("QPushButton {border-image:url(:/new/src/icon/vm/dashboard/SetWndBtns/btn_rcsfw_n.png)}QPushButton:pressed {border-image:url(:/new/src/icon/vm/dashboard/SetWndBtns/btn_rcsfw_p.png)}QPushButton:checked {border-image:url(:/new/src/icon/vm/dashboard/SetWndBtns/btn_rcsfw_s.png)}"));
        RCSResetBtn->setCheckable(false);
        RCSResetBtn->setAutoExclusive(false);

        leftBtnlayout->addWidget(RCSResetBtn);

        MoreBtn = new QPushButton(leftBtnWidget);
        MoreBtn->setObjectName(QStringLiteral("MoreBtn"));
        MoreBtn->setMinimumSize(QSize(85, 80));
        MoreBtn->setStyleSheet(QStringLiteral("QPushButton {border-image:url(:/icon/vm/dashboard/buttons/newButton/Left/btn_gd_n.png)}QPushButton:pressed {border-image:url(:/icon/vm/dashboard/buttons/newButton/Left/btn_gd_p.png)}QPushButton:checked {border-image:url(:/icon/vm/dashboard/buttons/newButton/Pinhole/btn_fh_n.png)}"));
        MoreBtn->setCheckable(true);
        MoreBtn->setAutoExclusive(false);
        MoreBtn->setAutoDefault(false);
        MoreBtn->setFlat(false);

        leftBtnlayout->addWidget(MoreBtn);

        rightBtnWidget = new QWidget(chassisUI);
        rightBtnWidget->setObjectName(QStringLiteral("rightBtnWidget"));
        rightBtnWidget->setGeometry(QRect(1190, 100, 85, 350));
        rightBtnlayout = new QVBoxLayout(rightBtnWidget);
        rightBtnlayout->setSpacing(10);
        rightBtnlayout->setContentsMargins(11, 11, 11, 11);
        rightBtnlayout->setObjectName(QStringLiteral("rightBtnlayout"));
        rightBtnlayout->setContentsMargins(0, 0, 0, 0);
        MonitorBtn = new QPushButton(rightBtnWidget);
        MonitorBtn->setObjectName(QStringLiteral("MonitorBtn"));
        MonitorBtn->setMinimumSize(QSize(85, 80));
        MonitorBtn->setStyleSheet(QStringLiteral("QPushButton {border-image:url(:/icon/vm/dashboard/buttons/newButton/Right/btn_jjjs_n.png)}QPushButton:pressed {border-image:url(:/icon/vm/dashboard/buttons/newButton/Right/btn_jjjs_p.png)}QPushButton:checked {border-image:url(:/icon/vm/dashboard/buttons/newButton/Right/btn_jjjs_s.png)}"));
        MonitorBtn->setCheckable(false);

        rightBtnlayout->addWidget(MonitorBtn);

        MessageBtn = new QPushButton(rightBtnWidget);
        MessageBtn->setObjectName(QStringLiteral("MessageBtn"));
        MessageBtn->setMinimumSize(QSize(85, 80));
        MessageBtn->setStyleSheet(QStringLiteral("QPushButton {border-image:url(:/icon/vm/dashboard/buttons/newButton/Right/btn_xx_n.png)}QPushButton:pressed {border-image:url(:/icon/vm/dashboard/buttons/newButton/Right/btn_xx_p.png)}QPushButton:checked {border-image:url(:/icon/vm/dashboard/buttons/newButton/Right/btn_xx_s.png)}"));
        MessageBtn->setCheckable(true);
        MessageBtn->setAutoExclusive(false);

        rightBtnlayout->addWidget(MessageBtn);

        MultiBtn = new QPushButton(rightBtnWidget);
        MultiBtn->setObjectName(QStringLiteral("MultiBtn"));
        MultiBtn->setMinimumSize(QSize(85, 80));
        MultiBtn->setStyleSheet(QStringLiteral("QPushButton {border-image:url(:/icon/vm/dashboard/buttons/newButton/Right/btn_dmxj_n.png)}QPushButton:pressed {border-image:url(:/icon/vm/dashboard/buttons/newButton/Right/btn_dmxj_p.png)}QPushButton:checked {border-image:url(:/icon/vm/dashboard/buttons/newButton/Right/btn_dmxj_s.png)}"));
        MultiBtn->setCheckable(true);
        MultiBtn->setChecked(true);
        MultiBtn->setAutoExclusive(true);

        rightBtnlayout->addWidget(MultiBtn);

        PinholeBtn = new QPushButton(rightBtnWidget);
        PinholeBtn->setObjectName(QStringLiteral("PinholeBtn"));
        PinholeBtn->setMinimumSize(QSize(85, 80));
        PinholeBtn->setStyleSheet(QStringLiteral("QPushButton {border-image:url(:/icon/vm/dashboard/buttons/newButton/Right/btn_zkxj_n.png)}QPushButton:pressed {border-image:url(:/icon/vm/dashboard/buttons/newButton/Right/btn_zkxj_p.png)}QPushButton:checked {border-image:url(:/icon/vm/dashboard/buttons/newButton/Right/btn_zkxj_s.png)}"));
        PinholeBtn->setCheckable(true);
        PinholeBtn->setAutoExclusive(true);

        rightBtnlayout->addWidget(PinholeBtn);

        middleWidget = new QWidget(chassisUI);
        middleWidget->setObjectName(QStringLiteral("middleWidget"));
        middleWidget->setGeometry(QRect(170, 585, 370, 115));
        middleBtnWidget = new QWidget(middleWidget);
        middleBtnWidget->setObjectName(QStringLiteral("middleBtnWidget"));
        middleBtnWidget->setGeometry(QRect(0, 35, 370, 80));
        horizontalLayout = new QHBoxLayout(middleBtnWidget);
        horizontalLayout->setSpacing(10);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        setBtn = new QPushButton(middleBtnWidget);
        setBtn->setObjectName(QStringLiteral("setBtn"));
        setBtn->setMinimumSize(QSize(85, 80));
        setBtn->setStyleSheet(QStringLiteral("QPushButton {border-image:url(:/icon/vm/dashboard/buttons/newButton/More/btn_sz_n.png)}QPushButton:pressed {border-image:url(:/icon/vm/dashboard/buttons/newButton/More/btn_sz_p.png)}QPushButton:checked {border-image:url(:/icon/vm/dashboard/buttons/newButton/More/btn_sz_s.png)}"));

        horizontalLayout->addWidget(setBtn);

        changeloadBtn = new QPushButton(middleBtnWidget);
        changeloadBtn->setObjectName(QStringLiteral("changeloadBtn"));
        changeloadBtn->setMinimumSize(QSize(85, 80));
        changeloadBtn->setStyleSheet(QStringLiteral("QPushButton {border-image:url(:/icon/vm/dashboard/buttons/newButton/More/btn_zhqh_n.png)}QPushButton:pressed {border-image:url(:/icon/vm/dashboard/buttons/newButton/More/btn_zhqh_p.png)}QPushButton:checked {border-image:url(:/icon/vm/dashboard/buttons/newButton/More/btn_zhqh_s.png)}"));

        horizontalLayout->addWidget(changeloadBtn);

        tailgateBtn = new QPushButton(middleBtnWidget);
        tailgateBtn->setObjectName(QStringLiteral("tailgateBtn"));
        tailgateBtn->setMinimumSize(QSize(85, 80));
        tailgateBtn->setStyleSheet(QStringLiteral("QPushButton {border-image:url(:/icon/vm/dashboard/buttons/newButton/More/btn_wmkz_n.png)}QPushButton:pressed {border-image:url(:/icon/vm/dashboard/buttons/newButton/More/btn_wmkz_p.png)}QPushButton:checked {border-image:url(:/icon/vm/dashboard/buttons/newButton/More/btn_wmkz_s.png)}"));

        horizontalLayout->addWidget(tailgateBtn);

        postureBtn = new QPushButton(middleBtnWidget);
        postureBtn->setObjectName(QStringLiteral("postureBtn"));
        postureBtn->setMinimumSize(QSize(85, 80));
        postureBtn->setStyleSheet(QStringLiteral("QPushButton {border-image:url(:/icon/vm/dashboard/buttons/newButton/More/btn_czkz_n.png)}QPushButton:pressed {border-image:url(:/icon/vm/dashboard/buttons/newButton/More/btn_czkz_p.png)}QPushButton:checked {border-image:url(:/icon/vm/dashboard/buttons/newButton/More/btn_czkz_s.png)}"));

        horizontalLayout->addWidget(postureBtn);

        middleTittleLabel = new QLabel(middleWidget);
        middleTittleLabel->setObjectName(QStringLiteral("middleTittleLabel"));
        middleTittleLabel->setGeometry(QRect(0, 0, 370, 30));
        changeloadWidget = new QWidget(chassisUI);
        changeloadWidget->setObjectName(QStringLiteral("changeloadWidget"));
        changeloadWidget->setGeometry(QRect(170, 585, 185, 115));
        chageloadBtnWidget = new QWidget(changeloadWidget);
        chageloadBtnWidget->setObjectName(QStringLiteral("chageloadBtnWidget"));
        chageloadBtnWidget->setGeometry(QRect(0, 35, 185, 80));
        horizontalLayout_2 = new QHBoxLayout(chageloadBtnWidget);
        horizontalLayout_2->setSpacing(10);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        pedrailBtn = new QPushButton(chageloadBtnWidget);
        pedrailBtn->setObjectName(QStringLiteral("pedrailBtn"));
        pedrailBtn->setMinimumSize(QSize(85, 80));
        pedrailBtn->setStyleSheet(QStringLiteral("QPushButton {border-image:url(:/icon/vm/dashboard/buttons/newButton/More/Load/btn_xld_n.png)}QPushButton:pressed {border-image:url(:/icon/vm/dashboard/buttons/newButton/More/Load/btn_xld_p.png)}QPushButton:checked {border-image:url(:/icon/vm/dashboard/buttons/newButton/More/Load/btn_xld_s.png)}"));

        horizontalLayout_2->addWidget(pedrailBtn);

        UAVBtn = new QPushButton(chageloadBtnWidget);
        UAVBtn->setObjectName(QStringLiteral("UAVBtn"));
        UAVBtn->setMinimumSize(QSize(85, 80));
        UAVBtn->setStyleSheet(QStringLiteral("QPushButton {border-image:url(:/icon/vm/dashboard/buttons/newButton/More/Load/btn_wrj_n.png)}QPushButton:pressed {border-image:url(:/icon/vm/dashboard/buttons/newButton/More/Load/btn_wrj_p.png)}QPushButton:checked {border-image:url(:/icon/vm/dashboard/buttons/newButton/More/Load/btn_wrj_s.png)}"));

        horizontalLayout_2->addWidget(UAVBtn);

        changeloadTittleLabel = new QLabel(changeloadWidget);
        changeloadTittleLabel->setObjectName(QStringLiteral("changeloadTittleLabel"));
        changeloadTittleLabel->setGeometry(QRect(0, 0, 185, 30));
        tailgateWidget = new QWidget(chassisUI);
        tailgateWidget->setObjectName(QStringLiteral("tailgateWidget"));
        tailgateWidget->setGeometry(QRect(170, 585, 560, 115));
        tailgateBtnWidget = new QWidget(tailgateWidget);
        tailgateBtnWidget->setObjectName(QStringLiteral("tailgateBtnWidget"));
        tailgateBtnWidget->setGeometry(QRect(0, 35, 560, 80));
        horizontalLayout_3 = new QHBoxLayout(tailgateBtnWidget);
        horizontalLayout_3->setSpacing(10);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        manualLockBtn = new QPushButton(tailgateBtnWidget);
        manualLockBtnGroup = new QButtonGroup(chassisUI);
        manualLockBtnGroup->setObjectName(QStringLiteral("manualLockBtnGroup"));
        manualLockBtnGroup->addButton(manualLockBtn);
        manualLockBtn->setObjectName(QStringLiteral("manualLockBtn"));
        manualLockBtn->setMinimumSize(QSize(85, 80));
        manualLockBtn->setStyleSheet(QStringLiteral("QPushButton {border-image:url(:/icon/vm/dashboard/buttons/newButton/More/Tailgate/ManualCtrl/btn_sj_n.png)}QPushButton:pressed {border-image:url(:/icon/vm/dashboard/buttons/newButton/More/Tailgate/ManualCtrl/btn_sj_p.png)}QPushButton:checked {border-image:url(:/icon/vm/dashboard/buttons/newButton/More/Tailgate/ManualCtrl/btn_sj_s.png)}"));
        manualLockBtn->setCheckable(true);

        horizontalLayout_3->addWidget(manualLockBtn);

        manualStop1Btn = new QPushButton(tailgateBtnWidget);
        manualLockBtnGroup->addButton(manualStop1Btn);
        manualStop1Btn->setObjectName(QStringLiteral("manualStop1Btn"));
        manualStop1Btn->setMinimumSize(QSize(85, 80));
        manualStop1Btn->setStyleSheet(QStringLiteral("QPushButton {border-image:url(:/icon/vm/dashboard/buttons/newButton/More/Tailgate/ManualCtrl/btn_tz_n.png)}QPushButton:pressed {border-image:url(:/icon/vm/dashboard/buttons/newButton/More/Tailgate/ManualCtrl/btn_tz_p.png)}QPushButton:checked {border-image:url(:/icon/vm/dashboard/buttons/newButton/More/Tailgate/ManualCtrl/btn_tz_s.png)}"));
        manualStop1Btn->setCheckable(true);
        manualStop1Btn->setChecked(true);

        horizontalLayout_3->addWidget(manualStop1Btn);

        manualUnlockBtn = new QPushButton(tailgateBtnWidget);
        manualLockBtnGroup->addButton(manualUnlockBtn);
        manualUnlockBtn->setObjectName(QStringLiteral("manualUnlockBtn"));
        manualUnlockBtn->setMinimumSize(QSize(85, 80));
        manualUnlockBtn->setStyleSheet(QStringLiteral("QPushButton {border-image:url(:/icon/vm/dashboard/buttons/newButton/More/Tailgate/ManualCtrl/btn_js_n.png)}QPushButton:pressed {border-image:url(:/icon/vm/dashboard/buttons/newButton/More/Tailgate/ManualCtrl/btn_js_p.png)}QPushButton:checked {border-image:url(:/icon/vm/dashboard/buttons/newButton/More/Tailgate/ManualCtrl/btn_js_s.png)}"));
        manualUnlockBtn->setCheckable(true);

        horizontalLayout_3->addWidget(manualUnlockBtn);

        manualReleaseBtn = new QPushButton(tailgateBtnWidget);
        manualreleaseBtnGroup = new QButtonGroup(chassisUI);
        manualreleaseBtnGroup->setObjectName(QStringLiteral("manualreleaseBtnGroup"));
        manualreleaseBtnGroup->addButton(manualReleaseBtn);
        manualReleaseBtn->setObjectName(QStringLiteral("manualReleaseBtn"));
        manualReleaseBtn->setMinimumSize(QSize(85, 80));
        manualReleaseBtn->setStyleSheet(QStringLiteral("QPushButton {border-image:url(:/icon/vm/dashboard/buttons/newButton/More/Tailgate/ManualCtrl/btn_fx_n.png)}QPushButton:pressed {border-image:url(:/icon/vm/dashboard/buttons/newButton/More/Tailgate/AutoCtrl/btn_fx_p.png)}QPushButton:checked {border-image:url(:/icon/vm/dashboard/buttons/newButton/More/Tailgate/AutoCtrl/btn_fx_s.png)}"));
        manualReleaseBtn->setCheckable(true);

        horizontalLayout_3->addWidget(manualReleaseBtn);

        manualStop2Bnt = new QPushButton(tailgateBtnWidget);
        manualreleaseBtnGroup->addButton(manualStop2Bnt);
        manualStop2Bnt->setObjectName(QStringLiteral("manualStop2Bnt"));
        manualStop2Bnt->setMinimumSize(QSize(85, 80));
        manualStop2Bnt->setStyleSheet(QStringLiteral("QPushButton {border-image:url(:/icon/vm/dashboard/buttons/newButton/More/Tailgate/ManualCtrl/btn_sftz_n.png)}QPushButton:pressed {border-image:url(:/icon/vm/dashboard/buttons/newButton/More/Tailgate/ManualCtrl/btn_sftz_p.png)}QPushButton:checked {border-image:url(:/icon/vm/dashboard/buttons/newButton/More/Tailgate/ManualCtrl/btn_sftz_s.png)}"));
        manualStop2Bnt->setCheckable(true);
        manualStop2Bnt->setChecked(true);

        horizontalLayout_3->addWidget(manualStop2Bnt);

        manualwithdrawBtn = new QPushButton(tailgateBtnWidget);
        manualreleaseBtnGroup->addButton(manualwithdrawBtn);
        manualwithdrawBtn->setObjectName(QStringLiteral("manualwithdrawBtn"));
        manualwithdrawBtn->setMinimumSize(QSize(85, 80));
        manualwithdrawBtn->setStyleSheet(QStringLiteral("QPushButton {border-image:url(:/icon/vm/dashboard/buttons/newButton/More/Tailgate/ManualCtrl/btn_sh_n.png)}QPushButton:pressed {border-image:url(:/icon/vm/dashboard/buttons/newButton/More/Tailgate/ManualCtrl/btn_sh_p.png)}QPushButton:checked {border-image:url(:/icon/vm/dashboard/buttons/newButton/More/Tailgate/ManualCtrl/btn_sh_s.png)}"));
        manualwithdrawBtn->setCheckable(true);

        horizontalLayout_3->addWidget(manualwithdrawBtn);

        tailgateTittlelabel = new QLabel(tailgateWidget);
        tailgateTittlelabel->setObjectName(QStringLiteral("tailgateTittlelabel"));
        tailgateTittlelabel->setGeometry(QRect(0, 0, 560, 30));
        postureWidget = new QWidget(chassisUI);
        postureWidget->setObjectName(QStringLiteral("postureWidget"));
        postureWidget->setGeometry(QRect(170, 585, 655, 115));
        postureBtnWidget = new QWidget(postureWidget);
        postureBtnWidget->setObjectName(QStringLiteral("postureBtnWidget"));
        postureBtnWidget->setGeometry(QRect(0, 35, 655, 80));
        horizontalLayout_4 = new QHBoxLayout(postureBtnWidget);
        horizontalLayout_4->setSpacing(10);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        CZKZ_CZSNBtn = new QPushButton(postureBtnWidget);
        CZKZ_CZSNBtn->setObjectName(QStringLiteral("CZKZ_CZSNBtn"));
        CZKZ_CZSNBtn->setMinimumSize(QSize(85, 80));
        CZKZ_CZSNBtn->setStyleSheet(QStringLiteral("QPushButton {border-image:url(:/icon/vm/dashboard/buttons/newButton/More/tscz/btn_cztj_n.png)}QPushButton:pressed {border-image:url(:/icon/vm/dashboard/buttons/newButton/More/tscz/btn_cztj_p.png)}QPushButton:checked {border-image:url(:/icon/vm/dashboard/buttons/newButton/More/tscz/btn_cztj_s.png)}"));
        CZKZ_CZSNBtn->setCheckable(true);

        horizontalLayout_4->addWidget(CZKZ_CZSNBtn);

        CZKZ_DDBtn = new QPushButton(postureBtnWidget);
        postureBtnGroup = new QButtonGroup(chassisUI);
        postureBtnGroup->setObjectName(QStringLiteral("postureBtnGroup"));
        postureBtnGroup->addButton(CZKZ_DDBtn);
        CZKZ_DDBtn->setObjectName(QStringLiteral("CZKZ_DDBtn"));
        CZKZ_DDBtn->setEnabled(false);
        CZKZ_DDBtn->setMinimumSize(QSize(85, 80));
        CZKZ_DDBtn->setStyleSheet(QStringLiteral("QPushButton {border-image:url(:/icon/vm/dashboard/buttons/newButton/More/tscz/btn_dd_n.png)}QPushButton:pressed {border-image:url(:/icon/vm/dashboard/buttons/newButton/More/tscz/btn_dd_p.png)}QPushButton:checked {border-image:url(:/icon/vm/dashboard/buttons/newButton/More/tscz/btn_dd_s.png)}/*QPushButton:disabled {border-image:url(:/icon/vm/dashboard/buttons/newButton/More/tscz/btn_dd_s.png)}*/"));
        CZKZ_DDBtn->setCheckable(true);

        horizontalLayout_4->addWidget(CZKZ_DDBtn);

        CZKZ_ZXZXBtn = new QPushButton(postureBtnWidget);
        postureBtnGroup->addButton(CZKZ_ZXZXBtn);
        CZKZ_ZXZXBtn->setObjectName(QStringLiteral("CZKZ_ZXZXBtn"));
        CZKZ_ZXZXBtn->setEnabled(false);
        CZKZ_ZXZXBtn->setMinimumSize(QSize(85, 80));
        CZKZ_ZXZXBtn->setStyleSheet(QStringLiteral("QPushButton {border-image:url(:/icon/vm/dashboard/buttons/newButton/More/tscz/btn_zxzx_n.png)}QPushButton:pressed {border-image:url(:/icon/vm/dashboard/buttons/newButton/More/tscz/btn_zxzx_p.png)}QPushButton:checked {border-image:url(:/icon/vm/dashboard/buttons/newButton/More/tscz/btn_zxzx_s.png)}"));
        CZKZ_ZXZXBtn->setCheckable(true);

        horizontalLayout_4->addWidget(CZKZ_ZXZXBtn);

        CZKZ_PDPBtn = new QPushButton(postureBtnWidget);
        postureBtnGroup->addButton(CZKZ_PDPBtn);
        CZKZ_PDPBtn->setObjectName(QStringLiteral("CZKZ_PDPBtn"));
        CZKZ_PDPBtn->setEnabled(false);
        CZKZ_PDPBtn->setMinimumSize(QSize(85, 80));
        CZKZ_PDPBtn->setStyleSheet(QStringLiteral("QPushButton {border-image:url(:/icon/vm/dashboard/buttons/newButton/More/tscz/btn_pdp_n.png)}QPushButton:pressed {border-image:url(:/icon/vm/dashboard/buttons/newButton/More/tscz/btn_pdp_p.png)}QPushButton:checked {border-image:url(:/icon/vm/dashboard/buttons/newButton/More/tscz/btn_pdp_s.png)}"));
        CZKZ_PDPBtn->setCheckable(true);

        horizontalLayout_4->addWidget(CZKZ_PDPBtn);

        CZKZ_YHGBtn = new QPushButton(postureBtnWidget);
        postureBtnGroup->addButton(CZKZ_YHGBtn);
        CZKZ_YHGBtn->setObjectName(QStringLiteral("CZKZ_YHGBtn"));
        CZKZ_YHGBtn->setEnabled(false);
        CZKZ_YHGBtn->setMinimumSize(QSize(85, 80));
        CZKZ_YHGBtn->setStyleSheet(QStringLiteral("QPushButton {border-image:url(:/icon/vm/dashboard/buttons/newButton/More/tscz/btn_yhg_n.png)}QPushButton:pressed {border-image:url(:/icon/vm/dashboard/buttons/newButton/More/tscz/btn_yhg_p.png)}QPushButton:checked {border-image:url(:/icon/vm/dashboard/buttons/newButton/More/tscz/btn_yhg_s.png)}"));
        CZKZ_YHGBtn->setCheckable(true);

        horizontalLayout_4->addWidget(CZKZ_YHGBtn);

        CZKZ_PCZQBtn = new QPushButton(postureBtnWidget);
        postureBtnGroup->addButton(CZKZ_PCZQBtn);
        CZKZ_PCZQBtn->setObjectName(QStringLiteral("CZKZ_PCZQBtn"));
        CZKZ_PCZQBtn->setEnabled(false);
        CZKZ_PCZQBtn->setMinimumSize(QSize(85, 80));
        CZKZ_PCZQBtn->setStyleSheet(QStringLiteral("QPushButton {border-image:url(:/icon/vm/dashboard/buttons/newButton/More/tscz/btn_pczq_n.png)}QPushButton:pressed {border-image:url(:/icon/vm/dashboard/buttons/newButton/More/tscz/btn_pczq_p.png)}QPushButton:checked {border-image:url(:/icon/vm/dashboard/buttons/newButton/More/tscz/btn_pczq_s.png)}"));
        CZKZ_PCZQBtn->setCheckable(true);

        horizontalLayout_4->addWidget(CZKZ_PCZQBtn);

        CZKZ_TZBtn = new QPushButton(postureBtnWidget);
        postureBtnGroup->addButton(CZKZ_TZBtn);
        CZKZ_TZBtn->setObjectName(QStringLiteral("CZKZ_TZBtn"));
        CZKZ_TZBtn->setEnabled(false);
        CZKZ_TZBtn->setMinimumSize(QSize(85, 80));
        CZKZ_TZBtn->setStyleSheet(QStringLiteral("QPushButton {border-image:url(:/icon/vm/dashboard/buttons/newButton/More/tscz/btn_gb_n.png)}QPushButton:pressed {border-image:url(:/icon/vm/dashboard/buttons/newButton/More/tscz/btn_gb_p.png)}QPushButton:checked {border-image:url(:/icon/vm/dashboard/buttons/newButton/More/tscz/btn_gb_s.png)}"));
        CZKZ_TZBtn->setCheckable(true);
        CZKZ_TZBtn->setChecked(true);

        horizontalLayout_4->addWidget(CZKZ_TZBtn);

        postureTittleLabel = new QLabel(postureWidget);
        postureTittleLabel->setObjectName(QStringLiteral("postureTittleLabel"));
        postureTittleLabel->setGeometry(QRect(0, 0, 655, 30));
        chassisDisableWidget = new QWidget(chassisUI);
        chassisDisableWidget->setObjectName(QStringLiteral("chassisDisableWidget"));
        chassisDisableWidget->setGeometry(QRect(0, 0, 1280, 720));
        chassisDisableWidget->setAutoFillBackground(true);
        chassisDisableBtnWidget = new QWidget(chassisDisableWidget);
        chassisDisableBtnWidget->setObjectName(QStringLiteral("chassisDisableBtnWidget"));
        chassisDisableBtnWidget->setGeometry(QRect(5, 100, 85, 170));
        verticalLayout = new QVBoxLayout(chassisDisableBtnWidget);
        verticalLayout->setSpacing(10);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        enableBtn = new QPushButton(chassisDisableBtnWidget);
        enableBtn->setObjectName(QStringLiteral("enableBtn"));
        enableBtn->setMinimumSize(QSize(85, 80));
        enableBtn->setStyleSheet(QStringLiteral("QPushButton {border-image:url(:/icon/vm/dashboard/buttons/newButton/btn_sn_n.png)}QPushButton:pressed {border-image:url(:/icon/vm/dashboard/buttons/newButton/btn_sn_p.png)}"));

        verticalLayout->addWidget(enableBtn);

        disconnectBtn = new QPushButton(chassisDisableBtnWidget);
        disconnectBtn->setObjectName(QStringLiteral("disconnectBtn"));
        disconnectBtn->setMinimumSize(QSize(85, 80));
        disconnectBtn->setStyleSheet(QStringLiteral("QPushButton {border-image:url(:/new/src/icon/vm/dashboard/buttons/first/btn_dklj_n.png)}QPushButton:pressed {border-image:url(:/new/src/icon/vm/dashboard/buttons/first/btn_dklj_p.png)}"));

        verticalLayout->addWidget(disconnectBtn);

        remoteBtnWidget = new QWidget(chassisDisableWidget);
        remoteBtnWidget->setObjectName(QStringLiteral("remoteBtnWidget"));
        remoteBtnWidget->setGeometry(QRect(5, 100, 85, 530));
        remoteBtnWidget->setAutoFillBackground(true);
        verticalLayout_2 = new QVBoxLayout(remoteBtnWidget);
        verticalLayout_2->setSpacing(10);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        Remote_gearsBtn = new QPushButton(remoteBtnWidget);
        Remote_gearsBtn->setObjectName(QStringLiteral("Remote_gearsBtn"));
        Remote_gearsBtn->setMinimumSize(QSize(85, 80));
        Remote_gearsBtn->setStyleSheet(QStringLiteral("QPushButton {border-image:url(:/icon/vm/dashboard/popwindows/btn_dwkz_n.png)}QPushButton:pressed {border-image:url(:/icon/vm/dashboard/popwindows/btn_dwkz_p.png)}QPushButton:checked {border-image:url(:/icon/vm/dashboard/popwindows/btn_dwkz_s.png)}"));
        Remote_gearsBtn->setCheckable(true);

        verticalLayout_2->addWidget(Remote_gearsBtn);

        Remote_stopBtn = new QPushButton(remoteBtnWidget);
        Remote_stopBtn->setObjectName(QStringLiteral("Remote_stopBtn"));
        Remote_stopBtn->setMinimumSize(QSize(85, 80));
        Remote_stopBtn->setStyleSheet(QStringLiteral("QPushButton {border-image:url(:/icon/vm/dashboard/popwindows/btn_zz_n.png)}QPushButton:pressed {border-image:url(:/icon/vm/dashboard/popwindows/btn_zz_p.png)}"));

        verticalLayout_2->addWidget(Remote_stopBtn);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        Remote_moreBtn = new QPushButton(remoteBtnWidget);
        Remote_moreBtn->setObjectName(QStringLiteral("Remote_moreBtn"));
        Remote_moreBtn->setMinimumSize(QSize(85, 80));
        Remote_moreBtn->setStyleSheet(QStringLiteral("QPushButton {border-image:url(:/icon/vm/dashboard/buttons/newButton/Left/btn_gd_n.png)}QPushButton:pressed {border-image:url(:/icon/vm/dashboard/buttons/newButton/Left/btn_gd_p.png)}QPushButton:checked {border-image:url(:/icon/vm/dashboard/buttons/newButton/Pinhole/btn_fh_n.png)}"));
        Remote_moreBtn->setCheckable(true);

        verticalLayout_2->addWidget(Remote_moreBtn);

        chassisDisableWidget->raise();
        leftBtnWidget->raise();
        rightBtnWidget->raise();
        changeloadWidget->raise();
        middleWidget->raise();
        postureWidget->raise();
        tailgateWidget->raise();

        retranslateUi(chassisUI);

        MoreBtn->setDefault(false);


        QMetaObject::connectSlotsByName(chassisUI);
    } // setupUi

    void retranslateUi(QWidget *chassisUI)
    {
        chassisUI->setWindowTitle(QString());
        TaskBtn->setText(QString());
        AutoBtn->setText(QString());
        RemoteBtn->setText(QString());
        DisableBtn->setText(QString());
        RCSResetBtn->setText(QString());
        MoreBtn->setText(QString());
        MonitorBtn->setText(QString());
        MessageBtn->setText(QString());
        MultiBtn->setText(QString());
        PinholeBtn->setText(QString());
        setBtn->setText(QString());
        changeloadBtn->setText(QString());
        tailgateBtn->setText(QString());
        postureBtn->setText(QString());
        middleTittleLabel->setText(QApplication::translate("chassisUI", "\346\233\264\345\244\232", Q_NULLPTR));
        pedrailBtn->setText(QString());
        UAVBtn->setText(QString());
        changeloadTittleLabel->setText(QApplication::translate("chassisUI", "\346\233\264\345\244\232>\350\275\275\350\215\267\345\210\207\346\215\242", Q_NULLPTR));
        manualLockBtn->setText(QString());
        manualStop1Btn->setText(QString());
        manualUnlockBtn->setText(QString());
        manualReleaseBtn->setText(QString());
        manualStop2Bnt->setText(QString());
        manualwithdrawBtn->setText(QString());
        tailgateTittlelabel->setText(QApplication::translate("chassisUI", "\346\233\264\345\244\232>\345\260\276\351\227\250\346\216\247\345\210\266", Q_NULLPTR));
        CZKZ_CZSNBtn->setText(QString());
        CZKZ_DDBtn->setText(QString());
        CZKZ_ZXZXBtn->setText(QString());
        CZKZ_PDPBtn->setText(QString());
        CZKZ_YHGBtn->setText(QString());
        CZKZ_PCZQBtn->setText(QString());
        CZKZ_TZBtn->setText(QString());
        postureTittleLabel->setText(QApplication::translate("chassisUI", "\346\233\264\345\244\232>\350\275\246\345\247\277\346\216\247\345\210\266", Q_NULLPTR));
        enableBtn->setText(QString());
        disconnectBtn->setText(QString());
        Remote_gearsBtn->setText(QString());
        Remote_stopBtn->setText(QString());
        Remote_moreBtn->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class chassisUI: public Ui_chassisUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHASSISUI_H
