/********************************************************************************
** Form generated from reading UI file 'plottingpop.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PLOTTINGPOP_H
#define UI_PLOTTINGPOP_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_PlottingPop
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;

    void setupUi(QDialog *PlottingPop)
    {
        if (PlottingPop->objectName().isEmpty())
            PlottingPop->setObjectName(QStringLiteral("PlottingPop"));
        PlottingPop->resize(600, 366);
        PlottingPop->setStyleSheet(QStringLiteral("background-color:black"));
        PlottingPop->setSizeGripEnabled(false);
        PlottingPop->setModal(false);
        pushButton = new QPushButton(PlottingPop);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(140, 280, 120, 60));
        QFont font;
        font.setFamily(QStringLiteral("Aharoni"));
        font.setPointSize(18);
        font.setBold(true);
        font.setWeight(75);
        pushButton->setFont(font);
        pushButton->setStyleSheet(QStringLiteral("QPushButton {border-image:url(:/icon/gis/MapSideIcon/btn_2_n.png)}QPushButton:pressed {border-image:url(:/icon/gis/MapSideIcon/btn_2_p.png)}QPushButton:checked {border-image:url(:/icon/gis/MapSideIcon/btn_1_p.png)}QPushButton{color: rgb(255, 255, 255)}"));
        pushButton->setCheckable(true);
        pushButton->setChecked(true);
        pushButton->setAutoExclusive(true);
        pushButton_2 = new QPushButton(PlottingPop);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(340, 280, 120, 60));
        pushButton_2->setFont(font);
        pushButton_2->setStyleSheet(QStringLiteral("QPushButton {border-image:url(:/icon/gis/MapSideIcon/btn_2_n.png)}QPushButton:pressed {border-image:url(:/icon/gis/MapSideIcon/btn_2_p.png)}QPushButton:checked {border-image:url(:/icon/gis/MapSideIcon/btn_1_p.png)}QPushButton{color: rgb(255, 255, 255)}"));
        pushButton_2->setCheckable(true);
        pushButton_2->setAutoExclusive(true);
        label = new QLabel(PlottingPop);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(210, 30, 201, 61));
        QFont font1;
        font1.setFamily(QStringLiteral("Aharoni"));
        font1.setPointSize(24);
        font1.setBold(true);
        font1.setWeight(75);
        label->setFont(font1);
        label->setStyleSheet(QStringLiteral("QLabel{color: rgb(255, 255, 255)}"));
        label_2 = new QLabel(PlottingPop);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(90, 130, 461, 41));
        QFont font2;
        font2.setFamily(QStringLiteral("Aharoni"));
        font2.setPointSize(20);
        font2.setBold(true);
        font2.setWeight(75);
        label_2->setFont(font2);
        label_2->setStyleSheet(QStringLiteral("QLabel{color: rgb(255, 255, 255)}"));
        label_3 = new QLabel(PlottingPop);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(90, 200, 461, 41));
        label_3->setFont(font2);
        label_3->setStyleSheet(QStringLiteral("QLabel{color: rgb(255, 255, 255)}"));

        retranslateUi(PlottingPop);

        QMetaObject::connectSlotsByName(PlottingPop);
    } // setupUi

    void retranslateUi(QDialog *PlottingPop)
    {
        PlottingPop->setWindowTitle(QApplication::translate("PlottingPop", "Dialog", Q_NULLPTR));
        pushButton->setText(QApplication::translate("PlottingPop", "\346\230\257", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("PlottingPop", "\345\220\246", Q_NULLPTR));
        label->setText(QApplication::translate("PlottingPop", "\345\210\206\346\256\265\350\247\204\345\210\222\351\200\211\346\213\251", Q_NULLPTR));
        label_2->setText(QApplication::translate("PlottingPop", "\344\275\277\347\224\250\345\210\206\346\256\265\350\247\204\345\210\222\345\212\237\350\203\275\357\274\214\350\257\267\347\202\271\345\207\273>>\346\230\257<<", Q_NULLPTR));
        label_3->setText(QApplication::translate("PlottingPop", "\345\237\272\346\234\254\350\207\252\344\270\273\351\251\276\351\251\266\345\212\237\350\203\275\357\274\214\350\257\267\347\202\271\345\207\273>>\345\220\246<<", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class PlottingPop: public Ui_PlottingPop {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PLOTTINGPOP_H
