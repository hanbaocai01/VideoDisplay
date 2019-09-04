/********************************************************************************
** Form generated from reading UI file 'remotepop.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REMOTEPOP_H
#define UI_REMOTEPOP_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RemotePop
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *SpeedValueLabel;
    QLabel *label_4;
    QSlider *SpeedValueSlider;
    QLabel *label_5;
    QLabel *label_6;
    QPushButton *SpeedSubBtn;
    QPushButton *SpeedAddBtn;
    QLabel *label_7;
    QLabel *label_8;
    QPushButton *SheerBtn;
    QWidget *DynamicWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *MixtureBtn;
    QPushButton *PureBtn;
    QPushButton *OKBtn;
    QPushButton *CancelBtn;

    void setupUi(QDialog *RemotePop)
    {
        if (RemotePop->objectName().isEmpty())
            RemotePop->setObjectName(QStringLiteral("RemotePop"));
        RemotePop->resize(727, 437);
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        RemotePop->setFont(font);
        label = new QLabel(RemotePop);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(220, 10, 281, 41));
        QFont font1;
        font1.setFamily(QStringLiteral("Aharoni"));
        font1.setPointSize(24);
        font1.setBold(true);
        font1.setWeight(75);
        label->setFont(font1);
        label_2 = new QLabel(RemotePop);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(40, 80, 81, 41));
        QFont font2;
        font2.setFamily(QStringLiteral("Aharoni"));
        font2.setPointSize(14);
        font2.setBold(true);
        font2.setWeight(75);
        label_2->setFont(font2);
        SpeedValueLabel = new QLabel(RemotePop);
        SpeedValueLabel->setObjectName(QStringLiteral("SpeedValueLabel"));
        SpeedValueLabel->setGeometry(QRect(300, 80, 61, 31));
        QFont font3;
        font3.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font3.setPointSize(22);
        font3.setBold(false);
        font3.setWeight(50);
        SpeedValueLabel->setFont(font3);
        label_4 = new QLabel(RemotePop);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(420, 90, 51, 31));
        QFont font4;
        font4.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font4.setPointSize(14);
        font4.setBold(false);
        font4.setWeight(50);
        label_4->setFont(font4);
        SpeedValueSlider = new QSlider(RemotePop);
        SpeedValueSlider->setObjectName(QStringLiteral("SpeedValueSlider"));
        SpeedValueSlider->setGeometry(QRect(160, 160, 391, 31));
        SpeedValueSlider->setOrientation(Qt::Horizontal);
        label_5 = new QLabel(RemotePop);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(130, 160, 16, 31));
        QFont font5;
        font5.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font5.setPointSize(14);
        label_5->setFont(font5);
        label_6 = new QLabel(RemotePop);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(570, 160, 41, 31));
        label_6->setFont(font5);
        SpeedSubBtn = new QPushButton(RemotePop);
        SpeedSubBtn->setObjectName(QStringLiteral("SpeedSubBtn"));
        SpeedSubBtn->setGeometry(QRect(70, 160, 31, 31));
        SpeedAddBtn = new QPushButton(RemotePop);
        SpeedAddBtn->setObjectName(QStringLiteral("SpeedAddBtn"));
        SpeedAddBtn->setGeometry(QRect(630, 160, 31, 31));
        label_7 = new QLabel(RemotePop);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(110, 230, 81, 41));
        QFont font6;
        font6.setFamily(QStringLiteral("Aharoni"));
        font6.setPointSize(12);
        font6.setBold(true);
        font6.setWeight(75);
        label_7->setFont(font6);
        label_8 = new QLabel(RemotePop);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(450, 230, 81, 41));
        label_8->setFont(font6);
        SheerBtn = new QPushButton(RemotePop);
        SheerBtn->setObjectName(QStringLiteral("SheerBtn"));
        SheerBtn->setEnabled(false);
        SheerBtn->setGeometry(QRect(470, 290, 75, 23));
        SheerBtn->setCheckable(true);
        SheerBtn->setChecked(true);
        DynamicWidget = new QWidget(RemotePop);
        DynamicWidget->setObjectName(QStringLiteral("DynamicWidget"));
        DynamicWidget->setGeometry(QRect(110, 290, 191, 23));
        horizontalLayout = new QHBoxLayout(DynamicWidget);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        MixtureBtn = new QPushButton(DynamicWidget);
        MixtureBtn->setObjectName(QStringLiteral("MixtureBtn"));
        MixtureBtn->setCheckable(true);
        MixtureBtn->setAutoExclusive(true);

        horizontalLayout->addWidget(MixtureBtn);

        PureBtn = new QPushButton(DynamicWidget);
        PureBtn->setObjectName(QStringLiteral("PureBtn"));
        PureBtn->setCheckable(true);
        PureBtn->setChecked(true);
        PureBtn->setAutoExclusive(true);

        horizontalLayout->addWidget(PureBtn);

        OKBtn = new QPushButton(RemotePop);
        OKBtn->setObjectName(QStringLiteral("OKBtn"));
        OKBtn->setGeometry(QRect(230, 360, 81, 31));
        OKBtn->setCheckable(false);
        OKBtn->setChecked(false);
        CancelBtn = new QPushButton(RemotePop);
        CancelBtn->setObjectName(QStringLiteral("CancelBtn"));
        CancelBtn->setGeometry(QRect(410, 360, 81, 31));

        retranslateUi(RemotePop);

        QMetaObject::connectSlotsByName(RemotePop);
    } // setupUi

    void retranslateUi(QDialog *RemotePop)
    {
        RemotePop->setWindowTitle(QApplication::translate("RemotePop", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("RemotePop", "\351\201\245\346\216\247\351\251\276\351\251\266\351\205\215\347\275\256\345\217\202\346\225\260", Q_NULLPTR));
        label_2->setText(QApplication::translate("RemotePop", "\345\272\225\347\233\230\351\231\220\351\200\237", Q_NULLPTR));
        SpeedValueLabel->setText(QApplication::translate("RemotePop", "0", Q_NULLPTR));
        label_4->setText(QApplication::translate("RemotePop", "km/h", Q_NULLPTR));
        label_5->setText(QApplication::translate("RemotePop", "0", Q_NULLPTR));
        label_6->setText(QApplication::translate("RemotePop", "120", Q_NULLPTR));
        SpeedSubBtn->setText(QString());
        SpeedAddBtn->setText(QString());
        label_7->setText(QApplication::translate("RemotePop", "\345\212\250\345\212\233\346\250\241\345\274\217", Q_NULLPTR));
        label_8->setText(QApplication::translate("RemotePop", "\350\275\254\345\220\221\346\226\271\345\274\217", Q_NULLPTR));
        SheerBtn->setText(QString());
        MixtureBtn->setText(QString());
        PureBtn->setText(QString());
        OKBtn->setText(QString());
        CancelBtn->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class RemotePop: public Ui_RemotePop {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REMOTEPOP_H
