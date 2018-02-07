/********************************************************************************
**  use command  "uic main_window.ui -o ui_main_window.h"
Form generated from reading UI file 'main_window.ui'
**
** Created: Wed Jun 26 14:36:19 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAIN_WINDOW_H
#define UI_MAIN_WINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindowDesign
{
public:
    QFrame *frameConnect;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_2;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *lineEditRobotIP;
    QLineEdit *lineEditRobotPort;
    QVBoxLayout *verticalLayout_3;
    QSpacerItem *verticalSpacer;
    QPushButton *pushButtonConnect;
    QSpacerItem *verticalSpacer_2;
    QFrame *frameMotorSensor;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *verticalSpacer_3;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *lineEditM1Pos;
    QLineEdit *lineEditM1Vel;
    QLineEdit *lineEditM1Temp;
    QLineEdit *lineEditM1Power;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QLineEdit *lineEditM2Pos;
    QLineEdit *lineEditM2Vel;
    QLineEdit *lineEditM2Temp;
    QLineEdit *lineEditM2Power;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_5;
    QLineEdit *lineEditM3Pos;
    QLineEdit *lineEditM3Vel;
    QLineEdit *lineEditM3Temp;
    QLineEdit *lineEditM3Power;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_6;
    QLineEdit *lineEditM4Pos;
    QLineEdit *lineEditM4Vel;
    QLineEdit *lineEditM4Temp;
    QLineEdit *lineEditM4Power;
    QFrame *frameMotorControl;
    QPushButton *pushButtonStopAll;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_7;
    QVBoxLayout *verticalLayout_8;
    QLabel *label_13;
    QLabel *label_12;
    QLabel *label_14;
    QLabel *label_11;
    QVBoxLayout *verticalLayout_6;
    QPushButton *pushButtonM1Up;
    QPushButton *pushButtonM2Up;
    QPushButton *pushButtonM3Up;
    QPushButton *pushButtonM4Up;
    QVBoxLayout *verticalLayout_7;
    QPushButton *pushButtonM1Down;
    QPushButton *pushButtonM2Down;
    QPushButton *pushButtonM3Down;
    QPushButton *pushButtonM4Down;
    QVBoxLayout *verticalLayout_9;
    QPushButton *pushButtonM1Stop;
    QPushButton *pushButtonM2Stop;
    QPushButton *pushButtonM3Stop;
    QPushButton *pushButtonM4Stop;
    QPushButton *pushButtonQuery2;
    QPushButton *pushButtonQuery1;
    QLabel *label_15;
    QLineEdit *lineEditBatVol;
    QLabel *label_16;
    QLabel *label_17;
    QLineEdit *lineEditChannel1State;
    QLineEdit *lineEditChannel2State;

    void setupUi(QWidget *MainWindowDesign)
    {
        if (MainWindowDesign->objectName().isEmpty())
            MainWindowDesign->setObjectName(QString::fromUtf8("MainWindowDesign"));
        MainWindowDesign->resize(501, 530);
        frameConnect = new QFrame(MainWindowDesign);
        frameConnect->setObjectName(QString::fromUtf8("frameConnect"));
        frameConnect->setGeometry(QRect(10, 10, 481, 71));
        frameConnect->setFrameShape(QFrame::StyledPanel);
        frameConnect->setFrameShadow(QFrame::Raised);
        layoutWidget = new QWidget(frameConnect);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 0, 421, 69));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout->addWidget(label_2);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        lineEditRobotIP = new QLineEdit(layoutWidget);
        lineEditRobotIP->setObjectName(QString::fromUtf8("lineEditRobotIP"));
        lineEditRobotIP->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(lineEditRobotIP);

        lineEditRobotPort = new QLineEdit(layoutWidget);
        lineEditRobotPort->setObjectName(QString::fromUtf8("lineEditRobotPort"));
        lineEditRobotPort->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(lineEditRobotPort);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalSpacer = new QSpacerItem(20, 13, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);

        pushButtonConnect = new QPushButton(layoutWidget);
        pushButtonConnect->setObjectName(QString::fromUtf8("pushButtonConnect"));

        verticalLayout_3->addWidget(pushButtonConnect);

        verticalSpacer_2 = new QSpacerItem(20, 13, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_2);


        horizontalLayout->addLayout(verticalLayout_3);

        frameMotorSensor = new QFrame(MainWindowDesign);
        frameMotorSensor->setObjectName(QString::fromUtf8("frameMotorSensor"));
        frameMotorSensor->setGeometry(QRect(10, 90, 481, 181));
        frameMotorSensor->setFrameShape(QFrame::StyledPanel);
        frameMotorSensor->setFrameShadow(QFrame::Raised);
        layoutWidget1 = new QWidget(frameMotorSensor);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(11, 11, 431, 162));
        verticalLayout_4 = new QVBoxLayout(layoutWidget1);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        verticalSpacer_3 = new QSpacerItem(20, 18, QSizePolicy::Minimum, QSizePolicy::Fixed);

        horizontalLayout_2->addItem(verticalSpacer_3);

        label_7 = new QLabel(layoutWidget1);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        horizontalLayout_2->addWidget(label_7);

        label_8 = new QLabel(layoutWidget1);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        horizontalLayout_2->addWidget(label_8);

        label_9 = new QLabel(layoutWidget1);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        horizontalLayout_2->addWidget(label_9);

        label_10 = new QLabel(layoutWidget1);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        horizontalLayout_2->addWidget(label_10);


        verticalLayout_4->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_3 = new QLabel(layoutWidget1);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_3->addWidget(label_3);

        lineEditM1Pos = new QLineEdit(layoutWidget1);
        lineEditM1Pos->setObjectName(QString::fromUtf8("lineEditM1Pos"));
        lineEditM1Pos->setEnabled(false);

        horizontalLayout_3->addWidget(lineEditM1Pos);

        lineEditM1Vel = new QLineEdit(layoutWidget1);
        lineEditM1Vel->setObjectName(QString::fromUtf8("lineEditM1Vel"));
        lineEditM1Vel->setEnabled(false);

        horizontalLayout_3->addWidget(lineEditM1Vel);

        lineEditM1Temp = new QLineEdit(layoutWidget1);
        lineEditM1Temp->setObjectName(QString::fromUtf8("lineEditM1Temp"));
        lineEditM1Temp->setEnabled(false);

        horizontalLayout_3->addWidget(lineEditM1Temp);

        lineEditM1Power = new QLineEdit(layoutWidget1);
        lineEditM1Power->setObjectName(QString::fromUtf8("lineEditM1Power"));
        lineEditM1Power->setEnabled(false);

        horizontalLayout_3->addWidget(lineEditM1Power);


        verticalLayout_4->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_4 = new QLabel(layoutWidget1);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_4->addWidget(label_4);

        lineEditM2Pos = new QLineEdit(layoutWidget1);
        lineEditM2Pos->setObjectName(QString::fromUtf8("lineEditM2Pos"));
        lineEditM2Pos->setEnabled(false);

        horizontalLayout_4->addWidget(lineEditM2Pos);

        lineEditM2Vel = new QLineEdit(layoutWidget1);
        lineEditM2Vel->setObjectName(QString::fromUtf8("lineEditM2Vel"));
        lineEditM2Vel->setEnabled(false);

        horizontalLayout_4->addWidget(lineEditM2Vel);

        lineEditM2Temp = new QLineEdit(layoutWidget1);
        lineEditM2Temp->setObjectName(QString::fromUtf8("lineEditM2Temp"));
        lineEditM2Temp->setEnabled(false);

        horizontalLayout_4->addWidget(lineEditM2Temp);

        lineEditM2Power = new QLineEdit(layoutWidget1);
        lineEditM2Power->setObjectName(QString::fromUtf8("lineEditM2Power"));
        lineEditM2Power->setEnabled(false);

        horizontalLayout_4->addWidget(lineEditM2Power);


        verticalLayout_4->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_5 = new QLabel(layoutWidget1);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_5->addWidget(label_5);

        lineEditM3Pos = new QLineEdit(layoutWidget1);
        lineEditM3Pos->setObjectName(QString::fromUtf8("lineEditM3Pos"));
        lineEditM3Pos->setEnabled(false);

        horizontalLayout_5->addWidget(lineEditM3Pos);

        lineEditM3Vel = new QLineEdit(layoutWidget1);
        lineEditM3Vel->setObjectName(QString::fromUtf8("lineEditM3Vel"));
        lineEditM3Vel->setEnabled(false);

        horizontalLayout_5->addWidget(lineEditM3Vel);

        lineEditM3Temp = new QLineEdit(layoutWidget1);
        lineEditM3Temp->setObjectName(QString::fromUtf8("lineEditM3Temp"));
        lineEditM3Temp->setEnabled(false);

        horizontalLayout_5->addWidget(lineEditM3Temp);

        lineEditM3Power = new QLineEdit(layoutWidget1);
        lineEditM3Power->setObjectName(QString::fromUtf8("lineEditM3Power"));
        lineEditM3Power->setEnabled(false);

        horizontalLayout_5->addWidget(lineEditM3Power);


        verticalLayout_4->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_6 = new QLabel(layoutWidget1);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout_6->addWidget(label_6);

        lineEditM4Pos = new QLineEdit(layoutWidget1);
        lineEditM4Pos->setObjectName(QString::fromUtf8("lineEditM4Pos"));
        lineEditM4Pos->setEnabled(false);

        horizontalLayout_6->addWidget(lineEditM4Pos);

        lineEditM4Vel = new QLineEdit(layoutWidget1);
        lineEditM4Vel->setObjectName(QString::fromUtf8("lineEditM4Vel"));
        lineEditM4Vel->setEnabled(false);

        horizontalLayout_6->addWidget(lineEditM4Vel);

        lineEditM4Temp = new QLineEdit(layoutWidget1);
        lineEditM4Temp->setObjectName(QString::fromUtf8("lineEditM4Temp"));
        lineEditM4Temp->setEnabled(false);

        horizontalLayout_6->addWidget(lineEditM4Temp);

        lineEditM4Power = new QLineEdit(layoutWidget1);
        lineEditM4Power->setObjectName(QString::fromUtf8("lineEditM4Power"));
        lineEditM4Power->setEnabled(false);

        horizontalLayout_6->addWidget(lineEditM4Power);


        verticalLayout_4->addLayout(horizontalLayout_6);

        frameMotorControl = new QFrame(MainWindowDesign);
        frameMotorControl->setObjectName(QString::fromUtf8("frameMotorControl"));
        frameMotorControl->setEnabled(false);
        frameMotorControl->setGeometry(QRect(10, 280, 481, 241));
        frameMotorControl->setFrameShape(QFrame::StyledPanel);
        frameMotorControl->setFrameShadow(QFrame::Raised);
        pushButtonStopAll = new QPushButton(frameMotorControl);
        pushButtonStopAll->setObjectName(QString::fromUtf8("pushButtonStopAll"));
        pushButtonStopAll->setGeometry(QRect(380, 150, 98, 27));
        layoutWidget2 = new QWidget(frameMotorControl);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(0, 0, 441, 141));
        horizontalLayout_7 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setSpacing(6);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        label_13 = new QLabel(layoutWidget2);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout_8->addWidget(label_13);

        label_12 = new QLabel(layoutWidget2);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout_8->addWidget(label_12);

        label_14 = new QLabel(layoutWidget2);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout_8->addWidget(label_14);

        label_11 = new QLabel(layoutWidget2);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout_8->addWidget(label_11);


        horizontalLayout_7->addLayout(verticalLayout_8);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        pushButtonM1Up = new QPushButton(layoutWidget2);
        pushButtonM1Up->setObjectName(QString::fromUtf8("pushButtonM1Up"));

        verticalLayout_6->addWidget(pushButtonM1Up);

        pushButtonM2Up = new QPushButton(layoutWidget2);
        pushButtonM2Up->setObjectName(QString::fromUtf8("pushButtonM2Up"));

        verticalLayout_6->addWidget(pushButtonM2Up);

        pushButtonM3Up = new QPushButton(layoutWidget2);
        pushButtonM3Up->setObjectName(QString::fromUtf8("pushButtonM3Up"));

        verticalLayout_6->addWidget(pushButtonM3Up);

        pushButtonM4Up = new QPushButton(layoutWidget2);
        pushButtonM4Up->setObjectName(QString::fromUtf8("pushButtonM4Up"));

        verticalLayout_6->addWidget(pushButtonM4Up);


        horizontalLayout_7->addLayout(verticalLayout_6);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        pushButtonM1Down = new QPushButton(layoutWidget2);
        pushButtonM1Down->setObjectName(QString::fromUtf8("pushButtonM1Down"));

        verticalLayout_7->addWidget(pushButtonM1Down);

        pushButtonM2Down = new QPushButton(layoutWidget2);
        pushButtonM2Down->setObjectName(QString::fromUtf8("pushButtonM2Down"));

        verticalLayout_7->addWidget(pushButtonM2Down);

        pushButtonM3Down = new QPushButton(layoutWidget2);
        pushButtonM3Down->setObjectName(QString::fromUtf8("pushButtonM3Down"));

        verticalLayout_7->addWidget(pushButtonM3Down);

        pushButtonM4Down = new QPushButton(layoutWidget2);
        pushButtonM4Down->setObjectName(QString::fromUtf8("pushButtonM4Down"));

        verticalLayout_7->addWidget(pushButtonM4Down);


        horizontalLayout_7->addLayout(verticalLayout_7);

        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setSpacing(6);
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        pushButtonM1Stop = new QPushButton(layoutWidget2);
        pushButtonM1Stop->setObjectName(QString::fromUtf8("pushButtonM1Stop"));

        verticalLayout_9->addWidget(pushButtonM1Stop);

        pushButtonM2Stop = new QPushButton(layoutWidget2);
        pushButtonM2Stop->setObjectName(QString::fromUtf8("pushButtonM2Stop"));

        verticalLayout_9->addWidget(pushButtonM2Stop);

        pushButtonM3Stop = new QPushButton(layoutWidget2);
        pushButtonM3Stop->setObjectName(QString::fromUtf8("pushButtonM3Stop"));

        verticalLayout_9->addWidget(pushButtonM3Stop);

        pushButtonM4Stop = new QPushButton(layoutWidget2);
        pushButtonM4Stop->setObjectName(QString::fromUtf8("pushButtonM4Stop"));

        verticalLayout_9->addWidget(pushButtonM4Stop);


        horizontalLayout_7->addLayout(verticalLayout_9);

        pushButtonQuery2 = new QPushButton(frameMotorControl);
        pushButtonQuery2->setObjectName(QString::fromUtf8("pushButtonQuery2"));
        pushButtonQuery2->setGeometry(QRect(270, 150, 98, 27));
        pushButtonQuery1 = new QPushButton(frameMotorControl);
        pushButtonQuery1->setObjectName(QString::fromUtf8("pushButtonQuery1"));
        pushButtonQuery1->setGeometry(QRect(170, 150, 98, 27));
        label_15 = new QLabel(frameMotorControl);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(10, 153, 66, 17));
        label_15->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        lineEditBatVol = new QLineEdit(frameMotorControl);
        lineEditBatVol->setObjectName(QString::fromUtf8("lineEditBatVol"));
        lineEditBatVol->setGeometry(QRect(80, 150, 71, 27));
        label_16 = new QLabel(frameMotorControl);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setGeometry(QRect(20, 180, 121, 20));
        label_16->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_17 = new QLabel(frameMotorControl);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setGeometry(QRect(29, 215, 111, 17));
        label_17->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        lineEditChannel1State = new QLineEdit(frameMotorControl);
        lineEditChannel1State->setObjectName(QString::fromUtf8("lineEditChannel1State"));
        lineEditChannel1State->setGeometry(QRect(160, 180, 291, 27));
        lineEditChannel2State = new QLineEdit(frameMotorControl);
        lineEditChannel2State->setObjectName(QString::fromUtf8("lineEditChannel2State"));
        lineEditChannel2State->setGeometry(QRect(160, 210, 291, 27));

        retranslateUi(MainWindowDesign);

        QMetaObject::connectSlotsByName(MainWindowDesign);
    } // setupUi

    void retranslateUi(QWidget *MainWindowDesign)
    {
        MainWindowDesign->setWindowTitle(QApplication::translate("MainWindowDesign", "Widget_DriArmCtl", 0));
        label->setText(QApplication::translate("MainWindowDesign", "Robot IP:", 0));
        label_2->setText(QApplication::translate("MainWindowDesign", "Robot Port:", 0));
        lineEditRobotIP->setText(QApplication::translate("MainWindowDesign", "192.168.0.63", 0));
        lineEditRobotPort->setText(QApplication::translate("MainWindowDesign", "10001", 0));
        pushButtonConnect->setText(QApplication::translate("MainWindowDesign", "Connect", 0));
        label_7->setText(QApplication::translate("MainWindowDesign", "Position", 0));
        label_8->setText(QApplication::translate("MainWindowDesign", "Velocity", 0));
        label_9->setText(QApplication::translate("MainWindowDesign", "Temperature", 0));
        label_10->setText(QApplication::translate("MainWindowDesign", "Power", 0));
        label_3->setText(QApplication::translate("MainWindowDesign", "Joint1:", 0));
        label_4->setText(QApplication::translate("MainWindowDesign", "Joint2:", 0));
        label_5->setText(QApplication::translate("MainWindowDesign", "Joint3:", 0));
        label_6->setText(QApplication::translate("MainWindowDesign", "Joint4:", 0));
        pushButtonStopAll->setText(QApplication::translate("MainWindowDesign", "ESTOP_ALL", 0));
        label_13->setText(QApplication::translate("MainWindowDesign", "J1 Motor:", 0));
        label_12->setText(QApplication::translate("MainWindowDesign", "J2 Motor:", 0));
        label_14->setText(QApplication::translate("MainWindowDesign", "J3 Motor:", 0));
        label_11->setText(QApplication::translate("MainWindowDesign", "J4 Motor:", 0));
        pushButtonM1Up->setText(QApplication::translate("MainWindowDesign", "^", 0));
        pushButtonM2Up->setText(QApplication::translate("MainWindowDesign", "^", 0));
        pushButtonM3Up->setText(QApplication::translate("MainWindowDesign", "^", 0));
        pushButtonM4Up->setText(QApplication::translate("MainWindowDesign", "^", 0));
        pushButtonM1Down->setText(QApplication::translate("MainWindowDesign", "v", 0));
        pushButtonM2Down->setText(QApplication::translate("MainWindowDesign", "v", 0));
        pushButtonM3Down->setText(QApplication::translate("MainWindowDesign", "v", 0));
        pushButtonM4Down->setText(QApplication::translate("MainWindowDesign", "v", 0));
        pushButtonM1Stop->setText(QApplication::translate("MainWindowDesign", "Stop", 0));
        pushButtonM2Stop->setText(QApplication::translate("MainWindowDesign", "Stop", 0));
        pushButtonM3Stop->setText(QApplication::translate("MainWindowDesign", "Stop", 0));
        pushButtonM4Stop->setText(QApplication::translate("MainWindowDesign", "Stop", 0));
        pushButtonQuery2->setText(QApplication::translate("MainWindowDesign", "Query2", 0));
        pushButtonQuery1->setText(QApplication::translate("MainWindowDesign", "Query1", 0));
        label_15->setText(QApplication::translate("MainWindowDesign", "Battery:", 0));
        label_16->setText(QApplication::translate("MainWindowDesign", "Channel 1 State:", 0));
        label_17->setText(QApplication::translate("MainWindowDesign", "Channel 2 State:", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindowDesign: public Ui_MainWindowDesign {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAIN_WINDOW_H
