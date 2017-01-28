/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.0.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "cores.h"
#include "painel.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionBotaCaixa;
    QWidget *centralWidget;
    QSplitter *splitter;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_4;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_2;
    QGroupBox *groupBox_5;
    QVBoxLayout *verticalLayout_8;
    QGridLayout *gridLayout_17;
    QRadioButton *radioButton_9;
    QRadioButton *radioButton_7;
    QRadioButton *radioButton_8;
    QGroupBox *groupBox_6;
    QHBoxLayout *horizontalLayout;
    QGridLayout *gridLayout_18;
    QRadioButton *Button_TiraCaixa;
    QRadioButton *botton_tiraEsfera;
    QRadioButton *botton_Esfera;
    QRadioButton *button_tiraElipse;
    QRadioButton *button_Elipse;
    QRadioButton *Botton_Caixa;
    Painel *widget;
    QPushButton *pushButton;
    QGroupBox *groupBox_7;
    QSlider *horizontalSlider_4;
    QSlider *horizontalSlider_14;
    QSlider *horizontalSliderPlano_z;
    QWidget *widget1;
    QGridLayout *gridLayout_6;
    QLabel *label_20;
    QLabel *label_21;
    QLabel *label_22;
    QWidget *widget2;
    QGridLayout *gridLayout_7;
    QLabel *label_23;
    QLabel *label_24;
    QLabel *label_25;
    QWidget *widget3;
    QVBoxLayout *verticalLayout_7;
    QGroupBox *groupBox;
    QSlider *horizontalSliderRaio;
    QLabel *label_4;
    QLabel *label_9;
    QGroupBox *groupBox_2;
    QSlider *horizontalSlider_RX;
    QSlider *horizontalSlider_RY;
    QSlider *horizontalSlider_RZ;
    QWidget *widget4;
    QGridLayout *gridLayout;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QWidget *widget5;
    QGridLayout *gridLayout_2;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QGroupBox *groupBox_4;
    QSlider *horizontalSlider_x;
    QSlider *horizontalSlider_y;
    QSlider *horizontalSlider_z;
    QWidget *widget6;
    QGridLayout *gridLayout_3;
    QLabel *label_17;
    QLabel *label_18;
    QLabel *label_19;
    QWidget *widget7;
    QGridLayout *gridLayout_4;
    QLabel *label_13;
    QLabel *label_14;
    QLabel *label_15;
    QGroupBox *groupBox_3;
    Cores *widget_2;
    QSlider *corVermelha;
    QSlider *horizontalSlider_2;
    QSlider *horizontalSlider_3;
    QSlider *horizontalSlider;
    QWidget *widget8;
    QGridLayout *gridLayout_5;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_26;
    QMenuBar *menuBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(810, 702);
        MainWindow->setStyleSheet(QStringLiteral("color: rgb(85, 85, 255);"));
        MainWindow->setIconSize(QSize(50, 50));
        actionBotaCaixa = new QAction(MainWindow);
        actionBotaCaixa->setObjectName(QStringLiteral("actionBotaCaixa"));
        QIcon icon;
        icon.addFile(QStringLiteral("recursos/1370389214_cube.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionBotaCaixa->setIcon(icon);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        splitter = new QSplitter(centralWidget);
        splitter->setObjectName(QStringLiteral("splitter"));
        splitter->setGeometry(QRect(0, 0, 16, 16));
        splitter->setOrientation(Qt::Horizontal);
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(0, 0, 16, 16));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget);
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        layoutWidget1 = new QWidget(centralWidget);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(10, 0, 791, 94));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        groupBox_5 = new QGroupBox(layoutWidget1);
        groupBox_5->setObjectName(QStringLiteral("groupBox_5"));
        groupBox_5->setStyleSheet(QLatin1String("QGroupBox {\n"
"     background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                       stop: 0 #E0E0E0, stop: 1 #FFFFFF);\n"
"     border: 2px solid gray;\n"
"     border-radius: 5px;\n"
"     margin-top: 1ex; /* leave space at the top for the title */\n"
" }\n"
" QGroupBox::title {\n"
"\n"
"     subcontrol-origin: margin;\n"
"     subcontrol-position: top center; /* position at the top center */\n"
"     padding: 0 3px;\n"
"     background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                       stop: 0 #FFOECE, stop: 1 #FFFFFF);\n"
" }\n"
" QGroupBox::indicator {\n"
"     width: 13px;\n"
"     height: 13px;\n"
" }"));
        verticalLayout_8 = new QVBoxLayout(groupBox_5);
        verticalLayout_8->setSpacing(6);
        verticalLayout_8->setContentsMargins(11, 11, 11, 11);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        gridLayout_17 = new QGridLayout();
        gridLayout_17->setSpacing(6);
        gridLayout_17->setObjectName(QStringLiteral("gridLayout_17"));
        radioButton_9 = new QRadioButton(groupBox_5);
        radioButton_9->setObjectName(QStringLiteral("radioButton_9"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/recursos/eixo_x.png"), QSize(), QIcon::Normal, QIcon::Off);
        radioButton_9->setIcon(icon1);
        radioButton_9->setIconSize(QSize(50, 50));

        gridLayout_17->addWidget(radioButton_9, 0, 0, 1, 1);

        radioButton_7 = new QRadioButton(groupBox_5);
        radioButton_7->setObjectName(QStringLiteral("radioButton_7"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/recursos/eixo_y.png"), QSize(), QIcon::Normal, QIcon::Off);
        radioButton_7->setIcon(icon2);
        radioButton_7->setIconSize(QSize(50, 50));

        gridLayout_17->addWidget(radioButton_7, 0, 1, 1, 1);

        radioButton_8 = new QRadioButton(groupBox_5);
        radioButton_8->setObjectName(QStringLiteral("radioButton_8"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/recursos/eixo_z.png"), QSize(), QIcon::Normal, QIcon::Off);
        radioButton_8->setIcon(icon3);
        radioButton_8->setIconSize(QSize(50, 50));

        gridLayout_17->addWidget(radioButton_8, 0, 2, 1, 1);


        verticalLayout_8->addLayout(gridLayout_17);


        horizontalLayout_2->addWidget(groupBox_5);

        groupBox_6 = new QGroupBox(layoutWidget1);
        groupBox_6->setObjectName(QStringLiteral("groupBox_6"));
        groupBox_6->setStyleSheet(QLatin1String("QGroupBox {\n"
"     background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                       stop: 0 #E0E0E0, stop: 1 #FFFFFF);\n"
"     border: 2px solid gray;\n"
"     border-radius: 5px;\n"
"     margin-top: 1ex; /* leave space at the top for the title */\n"
" }\n"
" QGroupBox::title {\n"
"\n"
"     subcontrol-origin: margin;\n"
"     subcontrol-position: top center; /* position at the top center */\n"
"     padding: 0 3px;\n"
"     background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                       stop: 0 #FFOECE, stop: 1 #FFFFFF);\n"
" }\n"
" QGroupBox::indicator {\n"
"     width: 13px;\n"
"     height: 13px;\n"
" }"));
        horizontalLayout = new QHBoxLayout(groupBox_6);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        gridLayout_18 = new QGridLayout();
        gridLayout_18->setSpacing(6);
        gridLayout_18->setObjectName(QStringLiteral("gridLayout_18"));
        Button_TiraCaixa = new QRadioButton(groupBox_6);
        Button_TiraCaixa->setObjectName(QStringLiteral("Button_TiraCaixa"));
        Button_TiraCaixa->setStyleSheet(QStringLiteral("border-bottom-color: rgb(0, 85, 255);"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/recursos/semcaixa.png"), QSize(), QIcon::Normal, QIcon::Off);
        Button_TiraCaixa->setIcon(icon4);
        Button_TiraCaixa->setIconSize(QSize(50, 50));

        gridLayout_18->addWidget(Button_TiraCaixa, 1, 1, 1, 1);

        botton_tiraEsfera = new QRadioButton(groupBox_6);
        botton_tiraEsfera->setObjectName(QStringLiteral("botton_tiraEsfera"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/recursos/semcirculo.png"), QSize(), QIcon::Normal, QIcon::Off);
        botton_tiraEsfera->setIcon(icon5);
        botton_tiraEsfera->setIconSize(QSize(50, 50));

        gridLayout_18->addWidget(botton_tiraEsfera, 1, 3, 1, 1);

        botton_Esfera = new QRadioButton(groupBox_6);
        botton_Esfera->setObjectName(QStringLiteral("botton_Esfera"));
        botton_Esfera->setStyleSheet(QStringLiteral(""));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/recursos/circulo.png"), QSize(), QIcon::Normal, QIcon::Off);
        botton_Esfera->setIcon(icon6);
        botton_Esfera->setIconSize(QSize(50, 50));

        gridLayout_18->addWidget(botton_Esfera, 1, 2, 1, 1);

        button_tiraElipse = new QRadioButton(groupBox_6);
        button_tiraElipse->setObjectName(QStringLiteral("button_tiraElipse"));
        button_tiraElipse->setStyleSheet(QStringLiteral(""));
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/recursos/semelipse.png"), QSize(), QIcon::Normal, QIcon::Off);
        button_tiraElipse->setIcon(icon7);
        button_tiraElipse->setIconSize(QSize(50, 50));

        gridLayout_18->addWidget(button_tiraElipse, 1, 6, 1, 1);

        button_Elipse = new QRadioButton(groupBox_6);
        button_Elipse->setObjectName(QStringLiteral("button_Elipse"));
        button_Elipse->setStyleSheet(QStringLiteral(""));
        QIcon icon8;
        icon8.addFile(QStringLiteral(":/recursos/elipse.png"), QSize(), QIcon::Normal, QIcon::Off);
        button_Elipse->setIcon(icon8);
        button_Elipse->setIconSize(QSize(50, 50));

        gridLayout_18->addWidget(button_Elipse, 1, 5, 1, 1);

        Botton_Caixa = new QRadioButton(groupBox_6);
        Botton_Caixa->setObjectName(QStringLiteral("Botton_Caixa"));
        Botton_Caixa->setStyleSheet(QStringLiteral(""));
        QIcon icon9;
        icon9.addFile(QStringLiteral(":/recursos/caixa.png"), QSize(), QIcon::Normal, QIcon::Off);
        Botton_Caixa->setIcon(icon9);
        Botton_Caixa->setIconSize(QSize(50, 50));

        gridLayout_18->addWidget(Botton_Caixa, 1, 0, 1, 1);


        horizontalLayout->addLayout(gridLayout_18);


        horizontalLayout_2->addWidget(groupBox_6);

        widget = new Painel(centralWidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(11, 101, 449, 453));
        widget->setStyleSheet(QLatin1String("\n"
"     border: 2px solid gray;\n"
"     border-radius: 1px;\n"
"     padding: 1px;\n"
"\n"
"/*border-left-color: rgb(85, 170, 0);\n"
"border-top-color: rgb(170, 0, 255);*/"));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(560, 590, 150, 50));
        QFont font;
        font.setPointSize(14);
        pushButton->setFont(font);
        QIcon icon10;
        icon10.addFile(QStringLiteral(":/recursos/1371102896_floppy_disk_save.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon10);
        pushButton->setIconSize(QSize(40, 40));
        groupBox_7 = new QGroupBox(centralWidget);
        groupBox_7->setObjectName(QStringLiteral("groupBox_7"));
        groupBox_7->setGeometry(QRect(11, 560, 451, 101));
        groupBox_7->setStyleSheet(QLatin1String("QGroupBox {\n"
"     background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                       stop: 0 #E0E0E0, stop: 1 #FFFFFF);\n"
"     border: 2px solid gray;\n"
"     border-radius: 5px;\n"
"     margin-top: 1ex; /* leave space at the top for the title */\n"
" }\n"
" QGroupBox::title {\n"
"\n"
"     subcontrol-origin: margin;\n"
"     subcontrol-position: top center; /* position at the top center */\n"
"     padding: 0 3px;\n"
"     background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                       stop: 0 #FFOECE, stop: 1 #FFFFFF);\n"
" }\n"
" QGroupBox::indicator {\n"
"     width: 13px;\n"
"     height: 13px;\n"
" }"));
        horizontalSlider_4 = new QSlider(groupBox_7);
        horizontalSlider_4->setObjectName(QStringLiteral("horizontalSlider_4"));
        horizontalSlider_4->setGeometry(QRect(40, 10, 351, 20));
        horizontalSlider_4->setStyleSheet(QLatin1String(" QSlider::groove:horizontal {\n"
"     border: 1px solid #999999;\n"
"     height: 9px; /* the groove expands to the size of the slider by default. by giving it a height, it has a fixed size */\n"
"     background: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 #B1B1B1, stop:1 #c4c4c4);\n"
"     margin: 2px 0;\n"
" }\n"
"\n"
" QSlider::handle:horizontal {\n"
"     background: qlineargradient(x1:0, y1:0, x2:1, y2:1, stop:0 #b4b4b4, stop:1 #8f8f8f);\n"
"     border: 1px solid #5c5c5c;\n"
"     width: 20px;\n"
"     height: 20px;\n"
"     margin: -2px 0; /* handle is placed by default on the contents rect of the groove. Expand outside the groove */\n"
"     border-radius: 5px;\n"
" }\n"
"\n"
""));
        horizontalSlider_4->setOrientation(Qt::Horizontal);
        horizontalSlider_14 = new QSlider(groupBox_7);
        horizontalSlider_14->setObjectName(QStringLiteral("horizontalSlider_14"));
        horizontalSlider_14->setGeometry(QRect(40, 40, 351, 20));
        horizontalSlider_14->setStyleSheet(QLatin1String(" QSlider::groove:horizontal {\n"
"     border: 1px solid #999999;\n"
"     height: 9px; /* the groove expands to the size of the slider by default. by giving it a height, it has a fixed size */\n"
"     background: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 #B1B1B1, stop:1 #c4c4c4);\n"
"     margin: 2px 0;\n"
" }\n"
"\n"
" QSlider::handle:horizontal {\n"
"     background: qlineargradient(x1:0, y1:0, x2:1, y2:1, stop:0 #b4b4b4, stop:1 #8f8f8f);\n"
"     border: 1px solid #5c5c5c;\n"
"     width: 20px;\n"
"     height: 20px;\n"
"     margin: -2px 0; /* handle is placed by default on the contents rect of the groove. Expand outside the groove */\n"
"     border-radius: 5px;\n"
" }\n"
"\n"
""));
        horizontalSlider_14->setOrientation(Qt::Horizontal);
        horizontalSliderPlano_z = new QSlider(groupBox_7);
        horizontalSliderPlano_z->setObjectName(QStringLiteral("horizontalSliderPlano_z"));
        horizontalSliderPlano_z->setGeometry(QRect(40, 70, 351, 20));
        horizontalSliderPlano_z->setStyleSheet(QLatin1String(" QSlider::groove:horizontal {\n"
"     border: 1px solid #999999;\n"
"     height: 9px; /* the groove expands to the size of the slider by default. by giving it a height, it has a fixed size */\n"
"     background: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 #B1B1B1, stop:1 #c4c4c4);\n"
"     margin: 2px 0;\n"
" }\n"
"\n"
" QSlider::handle:horizontal {\n"
"     background: qlineargradient(x1:0, y1:0, x2:1, y2:1, stop:0 #b4b4b4, stop:1 #8f8f8f);\n"
"     border: 1px solid #5c5c5c;\n"
"     width: 20px;\n"
"     height: 20px;\n"
"     margin: -2px 0; /* handle is placed by default on the contents rect of the groove. Expand outside the groove */\n"
"     border-radius: 5px;\n"
" }\n"
"\n"
""));
        horizontalSliderPlano_z->setOrientation(Qt::Horizontal);
        widget1 = new QWidget(groupBox_7);
        widget1->setObjectName(QStringLiteral("widget1"));
        widget1->setGeometry(QRect(400, 10, 31, 86));
        gridLayout_6 = new QGridLayout(widget1);
        gridLayout_6->setSpacing(6);
        gridLayout_6->setContentsMargins(11, 11, 11, 11);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        gridLayout_6->setContentsMargins(0, 0, 0, 0);
        label_20 = new QLabel(widget1);
        label_20->setObjectName(QStringLiteral("label_20"));
        label_20->setStyleSheet(QLatin1String("QFrame, QLabel, QToolTip {\n"
"     border: 2px solid gray;\n"
"     border-radius: 1px;\n"
"     padding: 1px;\n"
"	font: 11pt \"MS Shell Dlg 2\";\n"
" }"));
        label_20->setFrameShape(QFrame::Panel);

        gridLayout_6->addWidget(label_20, 0, 0, 1, 1);

        label_21 = new QLabel(widget1);
        label_21->setObjectName(QStringLiteral("label_21"));
        label_21->setStyleSheet(QLatin1String("QFrame, QLabel, QToolTip {\n"
"     border: 2px solid gray;\n"
"     border-radius: 1px;\n"
"     padding: 1px;\n"
"	font: 11pt \"MS Shell Dlg 2\";\n"
" }"));
        label_21->setFrameShape(QFrame::Panel);

        gridLayout_6->addWidget(label_21, 1, 0, 1, 1);

        label_22 = new QLabel(widget1);
        label_22->setObjectName(QStringLiteral("label_22"));
        label_22->setStyleSheet(QLatin1String("QFrame, QLabel, QToolTip {\n"
"     border: 2px solid gray;\n"
"     border-radius: 1px;\n"
"     padding: 1px;\n"
"	font: 11pt \"MS Shell Dlg 2\";\n"
" }"));
        label_22->setFrameShape(QFrame::Panel);

        gridLayout_6->addWidget(label_22, 2, 0, 1, 1);

        widget2 = new QWidget(groupBox_7);
        widget2->setObjectName(QStringLiteral("widget2"));
        widget2->setGeometry(QRect(10, 20, 21, 71));
        gridLayout_7 = new QGridLayout(widget2);
        gridLayout_7->setSpacing(6);
        gridLayout_7->setContentsMargins(11, 11, 11, 11);
        gridLayout_7->setObjectName(QStringLiteral("gridLayout_7"));
        gridLayout_7->setContentsMargins(0, 0, 0, 0);
        label_23 = new QLabel(widget2);
        label_23->setObjectName(QStringLiteral("label_23"));

        gridLayout_7->addWidget(label_23, 0, 0, 1, 1);

        label_24 = new QLabel(widget2);
        label_24->setObjectName(QStringLiteral("label_24"));

        gridLayout_7->addWidget(label_24, 1, 0, 1, 1);

        label_25 = new QLabel(widget2);
        label_25->setObjectName(QStringLiteral("label_25"));

        gridLayout_7->addWidget(label_25, 2, 0, 1, 1);

        widget3 = new QWidget(centralWidget);
        widget3->setObjectName(QStringLiteral("widget3"));
        widget3->setGeometry(QRect(470, 100, 331, 471));
        verticalLayout_7 = new QVBoxLayout(widget3);
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setContentsMargins(11, 11, 11, 11);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        groupBox = new QGroupBox(widget3);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setStyleSheet(QLatin1String("QGroupBox {\n"
"     background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                       stop: 0 #E0E0E0, stop: 1 #FFFFFF);\n"
"     border: 2px solid gray;\n"
"     border-radius: 5px;\n"
"     margin-top: 1ex; /* leave space at the top for the title */\n"
" }\n"
" QGroupBox::title {\n"
"\n"
"     subcontrol-origin: margin;\n"
"     subcontrol-position: top center; /* position at the top center */\n"
"     padding: 0 3px;\n"
"     background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                       stop: 0 #FFOECE, stop: 1 #FFFFFF);\n"
" }\n"
" QGroupBox::indicator {\n"
"     width: 13px;\n"
"     height: 13px;\n"
" }"));
        horizontalSliderRaio = new QSlider(groupBox);
        horizontalSliderRaio->setObjectName(QStringLiteral("horizontalSliderRaio"));
        horizontalSliderRaio->setGeometry(QRect(40, 40, 231, 20));
        horizontalSliderRaio->setStyleSheet(QLatin1String(" QSlider::groove:horizontal {\n"
"     border: 1px solid #999999;\n"
"     height: 9px; /* the groove expands to the size of the slider by default. by giving it a height, it has a fixed size */\n"
"     background: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 #B1B1B1, stop:1 #c4c4c4);\n"
"     margin: 2px 0;\n"
" }\n"
"\n"
" QSlider::handle:horizontal {\n"
"     background: qlineargradient(x1:0, y1:0, x2:1, y2:1, stop:0 #b4b4b4, stop:1 #8f8f8f);\n"
"     border: 1px solid #5c5c5c;\n"
"     width: 20px;\n"
"     height: 20px;\n"
"     margin: -2px 0; /* handle is placed by default on the contents rect of the groove. Expand outside the groove */\n"
"     border-radius: 5px;\n"
" }\n"
"\n"
""));
        horizontalSliderRaio->setOrientation(Qt::Horizontal);
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(20, 40, 16, 16));
        label_9 = new QLabel(groupBox);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(280, 40, 31, 31));
        label_9->setStyleSheet(QLatin1String("QFrame, QLabel, QToolTip {\n"
"     border: 2px solid gray;\n"
"     border-radius: 1px;\n"
"     padding: 1px;\n"
"	font: 11pt \"MS Shell Dlg 2\";\n"
" }"));
        label_9->setFrameShape(QFrame::Panel);

        verticalLayout_7->addWidget(groupBox);

        groupBox_2 = new QGroupBox(widget3);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setStyleSheet(QLatin1String("QGroupBox {\n"
"     background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                       stop: 0 #E0E0E0, stop: 1 #FFFFFF);\n"
"     border: 2px solid gray;\n"
"     border-radius: 5px;\n"
"     margin-top: 1ex; /* leave space at the top for the title */\n"
" }\n"
" QGroupBox::title {\n"
"\n"
"     subcontrol-origin: margin;\n"
"     subcontrol-position: top center; /* position at the top center */\n"
"     padding: 0 3px;\n"
"     background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                       stop: 0 #FFOECE, stop: 1 #FFFFFF);\n"
" }\n"
" QGroupBox::indicator {\n"
"     width: 13px;\n"
"     height: 13px;\n"
" }"));
        horizontalSlider_RX = new QSlider(groupBox_2);
        horizontalSlider_RX->setObjectName(QStringLiteral("horizontalSlider_RX"));
        horizontalSlider_RX->setEnabled(true);
        horizontalSlider_RX->setGeometry(QRect(40, 22, 231, 16));
        horizontalSlider_RX->setSizeIncrement(QSize(10, 10));
        horizontalSlider_RX->setBaseSize(QSize(10, 10));
        QFont font1;
        font1.setPointSize(8);
        horizontalSlider_RX->setFont(font1);
        horizontalSlider_RX->setCursor(QCursor(Qt::SizeHorCursor));
        horizontalSlider_RX->setStyleSheet(QLatin1String(" QSlider::groove:horizontal {\n"
"     border: 1px solid #999999;\n"
"     height: 9px; /* the groove expands to the size of the slider by default. by giving it a height, it has a fixed size */\n"
"     background: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 #B1B1B1, stop:1 #c4c4c4);\n"
"     margin: 2px 0;\n"
" }\n"
"\n"
" QSlider::handle:horizontal {\n"
"     background: qlineargradient(x1:0, y1:0, x2:1, y2:1, stop:0 #b4b4b4, stop:1 #8f8f8f);\n"
"     border: 1px solid #5c5c5c;\n"
"     width: 20px;\n"
"     height: 20px;\n"
"     margin: -2px 0; /* handle is placed by default on the contents rect of the groove. Expand outside the groove */\n"
"     border-radius: 5px;\n"
" }\n"
"\n"
""));
        horizontalSlider_RX->setOrientation(Qt::Horizontal);
        horizontalSlider_RY = new QSlider(groupBox_2);
        horizontalSlider_RY->setObjectName(QStringLiteral("horizontalSlider_RY"));
        horizontalSlider_RY->setGeometry(QRect(40, 50, 231, 16));
        horizontalSlider_RY->setStyleSheet(QLatin1String(" QSlider::groove:horizontal {\n"
"     border: 1px solid #999999;\n"
"     height: 9px; /* the groove expands to the size of the slider by default. by giving it a height, it has a fixed size */\n"
"     background: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 #B1B1B1, stop:1 #c4c4c4);\n"
"     margin: 2px 0;\n"
" }\n"
"\n"
" QSlider::handle:horizontal {\n"
"     background: qlineargradient(x1:0, y1:0, x2:1, y2:1, stop:0 #b4b4b4, stop:1 #8f8f8f);\n"
"     border: 1px solid #5c5c5c;\n"
"     width: 20px;\n"
"     height: 20px;\n"
"     margin: -2px 0; /* handle is placed by default on the contents rect of the groove. Expand outside the groove */\n"
"     border-radius: 5px;\n"
" }\n"
"\n"
""));
        horizontalSlider_RY->setOrientation(Qt::Horizontal);
        horizontalSlider_RZ = new QSlider(groupBox_2);
        horizontalSlider_RZ->setObjectName(QStringLiteral("horizontalSlider_RZ"));
        horizontalSlider_RZ->setGeometry(QRect(40, 80, 231, 16));
        horizontalSlider_RZ->setStyleSheet(QLatin1String(" QSlider::groove:horizontal {\n"
"     border: 1px solid #999999;\n"
"     height: 9px; /* the groove expands to the size of the slider by default. by giving it a height, it has a fixed size */\n"
"     background: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 #B1B1B1, stop:1 #c4c4c4);\n"
"     margin: 2px 0;\n"
" }\n"
"\n"
" QSlider::handle:horizontal {\n"
"     background: qlineargradient(x1:0, y1:0, x2:1, y2:1, stop:0 #b4b4b4, stop:1 #8f8f8f);\n"
"     border: 1px solid #5c5c5c;\n"
"     width: 20px;\n"
"     height: 20px;\n"
"     margin: -2px 0; /* handle is placed by default on the contents rect of the groove. Expand outside the groove */\n"
"     border-radius: 5px;\n"
" }\n"
"\n"
""));
        horizontalSlider_RZ->setOrientation(Qt::Horizontal);
        widget4 = new QWidget(groupBox_2);
        widget4->setObjectName(QStringLiteral("widget4"));
        widget4->setGeometry(QRect(280, 10, 31, 91));
        gridLayout = new QGridLayout(widget4);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_10 = new QLabel(widget4);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setStyleSheet(QLatin1String("QFrame, QLabel, QToolTip {\n"
"     border: 2px solid gray;\n"
"     border-radius: 1px;\n"
"     padding: 1px;\n"
"	font: 11pt \"MS Shell Dlg 2\";\n"
" }"));
        label_10->setFrameShape(QFrame::Panel);

        gridLayout->addWidget(label_10, 0, 0, 1, 1);

        label_11 = new QLabel(widget4);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setStyleSheet(QLatin1String("QFrame, QLabel, QToolTip {\n"
"     border: 2px solid gray;\n"
"     border-radius: 1px;\n"
"     padding: 1px;\n"
"	font: 11pt \"MS Shell Dlg 2\";\n"
" }"));
        label_11->setFrameShape(QFrame::Panel);

        gridLayout->addWidget(label_11, 1, 0, 1, 1);

        label_12 = new QLabel(widget4);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setStyleSheet(QLatin1String("QFrame, QLabel, QToolTip {\n"
"     border: 2px solid gray;\n"
"     border-radius: 1px;\n"
"     padding: 1px;\n"
"	font: 11pt \"MS Shell Dlg 2\";\n"
" }"));
        label_12->setFrameShape(QFrame::Panel);

        gridLayout->addWidget(label_12, 2, 0, 1, 1);

        widget5 = new QWidget(groupBox_2);
        widget5->setObjectName(QStringLiteral("widget5"));
        widget5->setGeometry(QRect(13, 16, 21, 81));
        gridLayout_2 = new QGridLayout(widget5);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(widget5);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout_2->addWidget(label_6, 0, 0, 1, 1);

        label_7 = new QLabel(widget5);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayout_2->addWidget(label_7, 1, 0, 1, 1);

        label_8 = new QLabel(widget5);
        label_8->setObjectName(QStringLiteral("label_8"));

        gridLayout_2->addWidget(label_8, 2, 0, 1, 1);

        groupBox->raise();
        groupBox->raise();

        verticalLayout_7->addWidget(groupBox_2);

        groupBox_4 = new QGroupBox(widget3);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        groupBox_4->setStyleSheet(QLatin1String("QGroupBox {\n"
"     background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                       stop: 0 #E0E0E0, stop: 1 #FFFFFF);\n"
"     border: 2px solid gray;\n"
"     border-radius: 5px;\n"
"     margin-top: 1ex; /* leave space at the top for the title */\n"
" }\n"
" QGroupBox::title {\n"
"\n"
"     subcontrol-origin: margin;\n"
"     subcontrol-position: top center; /* position at the top center */\n"
"     padding: 0 3px;\n"
"     background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                       stop: 0 #FFOECE, stop: 1 #FFFFFF);\n"
" }\n"
" QGroupBox::indicator {\n"
"     width: 13px;\n"
"     height: 13px;\n"
" }"));
        horizontalSlider_x = new QSlider(groupBox_4);
        horizontalSlider_x->setObjectName(QStringLiteral("horizontalSlider_x"));
        horizontalSlider_x->setGeometry(QRect(40, 20, 231, 16));
        horizontalSlider_x->setStyleSheet(QLatin1String(" QSlider::groove:horizontal {\n"
"     border: 1px solid #999999;\n"
"     height: 9px; /* the groove expands to the size of the slider by default. by giving it a height, it has a fixed size */\n"
"     background: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 #B1B1B1, stop:1 #c4c4c4);\n"
"     margin: 2px 0;\n"
" }\n"
"\n"
" QSlider::handle:horizontal {\n"
"     background: qlineargradient(x1:0, y1:0, x2:1, y2:1, stop:0 #b4b4b4, stop:1 #8f8f8f);\n"
"     border: 1px solid #5c5c5c;\n"
"     width: 20px;\n"
"     height: 20px;\n"
"     margin: -2px 0; /* handle is placed by default on the contents rect of the groove. Expand outside the groove */\n"
"     border-radius: 5px;\n"
" }\n"
"\n"
""));
        horizontalSlider_x->setOrientation(Qt::Horizontal);
        horizontalSlider_y = new QSlider(groupBox_4);
        horizontalSlider_y->setObjectName(QStringLiteral("horizontalSlider_y"));
        horizontalSlider_y->setGeometry(QRect(40, 50, 231, 16));
        horizontalSlider_y->setStyleSheet(QLatin1String(" QSlider::groove:horizontal {\n"
"     border: 1px solid #999999;\n"
"     height: 9px; /* the groove expands to the size of the slider by default. by giving it a height, it has a fixed size */\n"
"     background: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 #B1B1B1, stop:1 #c4c4c4);\n"
"     margin: 2px 0;\n"
" }\n"
"\n"
" QSlider::handle:horizontal {\n"
"     background: qlineargradient(x1:0, y1:0, x2:1, y2:1, stop:0 #b4b4b4, stop:1 #8f8f8f);\n"
"     border: 1px solid #5c5c5c;\n"
"     width: 20px;\n"
"     height: 20px;\n"
"     margin: -2px 0; /* handle is placed by default on the contents rect of the groove. Expand outside the groove */\n"
"     border-radius: 5px;\n"
" }\n"
"\n"
""));
        horizontalSlider_y->setOrientation(Qt::Horizontal);
        horizontalSlider_z = new QSlider(groupBox_4);
        horizontalSlider_z->setObjectName(QStringLiteral("horizontalSlider_z"));
        horizontalSlider_z->setGeometry(QRect(40, 80, 231, 16));
        horizontalSlider_z->setStyleSheet(QLatin1String(" QSlider::groove:horizontal {\n"
"     border: 1px solid #999999;\n"
"     height: 9px; /* the groove expands to the size of the slider by default. by giving it a height, it has a fixed size */\n"
"     background: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 #B1B1B1, stop:1 #c4c4c4);\n"
"     margin: 2px 0;\n"
" }\n"
"\n"
" QSlider::handle:horizontal {\n"
"     background: qlineargradient(x1:0, y1:0, x2:1, y2:1, stop:0 #b4b4b4, stop:1 #8f8f8f);\n"
"     border: 1px solid #5c5c5c;\n"
"     width: 20px;\n"
"     height: 20px;\n"
"     margin: -2px 0; /* handle is placed by default on the contents rect of the groove. Expand outside the groove */\n"
"     border-radius: 5px;\n"
" }\n"
"\n"
""));
        horizontalSlider_z->setOrientation(Qt::Horizontal);
        widget6 = new QWidget(groupBox_4);
        widget6->setObjectName(QStringLiteral("widget6"));
        widget6->setGeometry(QRect(280, 20, 31, 86));
        gridLayout_3 = new QGridLayout(widget6);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        label_17 = new QLabel(widget6);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setStyleSheet(QLatin1String("QFrame, QLabel, QToolTip {\n"
"     border: 2px solid gray;\n"
"     border-radius: 1px;\n"
"     padding: 1px;\n"
"	font: 11pt \"MS Shell Dlg 2\";\n"
" }"));
        label_17->setFrameShape(QFrame::Box);

        gridLayout_3->addWidget(label_17, 0, 0, 1, 1);

        label_18 = new QLabel(widget6);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setStyleSheet(QLatin1String("QFrame, QLabel, QToolTip {\n"
"     border: 2px solid gray;\n"
"     border-radius: 1px;\n"
"     padding: 1px;\n"
"	font: 11pt \"MS Shell Dlg 2\";\n"
" }"));
        label_18->setFrameShape(QFrame::Panel);

        gridLayout_3->addWidget(label_18, 1, 0, 1, 1);

        label_19 = new QLabel(widget6);
        label_19->setObjectName(QStringLiteral("label_19"));
        label_19->setStyleSheet(QLatin1String("QFrame, QLabel, QToolTip {\n"
"     border: 2px solid gray;\n"
"     border-radius: 1px;\n"
"     padding: 1px;\n"
"	font: 11pt \"MS Shell Dlg 2\";\n"
" }"));
        label_19->setFrameShape(QFrame::Panel);

        gridLayout_3->addWidget(label_19, 2, 0, 1, 1);

        widget7 = new QWidget(groupBox_4);
        widget7->setObjectName(QStringLiteral("widget7"));
        widget7->setGeometry(QRect(12, 15, 21, 81));
        gridLayout_4 = new QGridLayout(widget7);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        label_13 = new QLabel(widget7);
        label_13->setObjectName(QStringLiteral("label_13"));

        gridLayout_4->addWidget(label_13, 0, 0, 1, 1);

        label_14 = new QLabel(widget7);
        label_14->setObjectName(QStringLiteral("label_14"));

        gridLayout_4->addWidget(label_14, 1, 0, 1, 1);

        label_15 = new QLabel(widget7);
        label_15->setObjectName(QStringLiteral("label_15"));

        gridLayout_4->addWidget(label_15, 2, 0, 1, 1);


        verticalLayout_7->addWidget(groupBox_4);

        groupBox_3 = new QGroupBox(widget3);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setStyleSheet(QLatin1String("QGroupBox {\n"
"     background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                       stop: 0 #E0E0E0, stop: 1 #FFFFFF);\n"
"     border: 2px solid gray;\n"
"     border-radius: 5px;\n"
"     margin-top: 1ex; /* leave space at the top for the title */\n"
" }\n"
" QGroupBox::title {\n"
"\n"
"     subcontrol-origin: margin;\n"
"     subcontrol-position: top center; /* position at the top center */\n"
"     padding: 0 3px;\n"
"     background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                       stop: 0 #FFOECE, stop: 1 #FFFFFF);\n"
" }\n"
" QGroupBox::indicator {\n"
"     width: 13px;\n"
"     height: 13px;\n"
" }"));
        widget_2 = new Cores(groupBox_3);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        widget_2->setGeometry(QRect(230, 20, 81, 81));
        widget_2->setStyleSheet(QLatin1String("\n"
"     border: 2px solid gray;\n"
"     border-radius: 1px;\n"
"     padding: 1px;\n"
""));
        corVermelha = new QSlider(groupBox_3);
        corVermelha->setObjectName(QStringLiteral("corVermelha"));
        corVermelha->setGeometry(QRect(40, 20, 181, 16));
        corVermelha->setStyleSheet(QLatin1String(" QSlider::groove:horizontal {\n"
"     border: 1px solid #999999;\n"
"     height: 9px; /* the groove expands to the size of the slider by default. by giving it a height, it has a fixed size */\n"
"     background: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 #B1B1B1, stop:1 #c4c4c4);\n"
"     margin: 2px 0;\n"
" }\n"
"\n"
" QSlider::handle:horizontal {\n"
"     background: qlineargradient(x1:0, y1:0, x2:1, y2:1, stop:0 #b4b4b4, stop:1 #8f8f8f);\n"
"     border: 1px solid #5c5c5c;\n"
"     width: 20px;\n"
"     height: 20px;\n"
"     margin: -2px 0; /* handle is placed by default on the contents rect of the groove. Expand outside the groove */\n"
"     border-radius: 5px;\n"
" }\n"
"\n"
""));
        corVermelha->setOrientation(Qt::Horizontal);
        horizontalSlider_2 = new QSlider(groupBox_3);
        horizontalSlider_2->setObjectName(QStringLiteral("horizontalSlider_2"));
        horizontalSlider_2->setGeometry(QRect(40, 40, 181, 16));
        horizontalSlider_2->setStyleSheet(QLatin1String(" QSlider::groove:horizontal {\n"
"     border: 1px solid #999999;\n"
"     height: 9px; /* the groove expands to the size of the slider by default. by giving it a height, it has a fixed size */\n"
"     background: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 #B1B1B1, stop:1 #c4c4c4);\n"
"     margin: 2px 0;\n"
" }\n"
"\n"
" QSlider::handle:horizontal {\n"
"     background: qlineargradient(x1:0, y1:0, x2:1, y2:1, stop:0 #b4b4b4, stop:1 #8f8f8f);\n"
"     border: 1px solid #5c5c5c;\n"
"     width: 20px;\n"
"     height: 20px;\n"
"     margin: -2px 0; /* handle is placed by default on the contents rect of the groove. Expand outside the groove */\n"
"     border-radius: 5px;\n"
" }\n"
"\n"
""));
        horizontalSlider_2->setOrientation(Qt::Horizontal);
        horizontalSlider_3 = new QSlider(groupBox_3);
        horizontalSlider_3->setObjectName(QStringLiteral("horizontalSlider_3"));
        horizontalSlider_3->setGeometry(QRect(40, 60, 181, 16));
        horizontalSlider_3->setStyleSheet(QLatin1String(" QSlider::groove:horizontal {\n"
"     border: 1px solid #999999;\n"
"     height: 9px; /* the groove expands to the size of the slider by default. by giving it a height, it has a fixed size */\n"
"     background: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 #B1B1B1, stop:1 #c4c4c4);\n"
"     margin: 2px 0;\n"
" }\n"
"\n"
" QSlider::handle:horizontal {\n"
"     background: qlineargradient(x1:0, y1:0, x2:1, y2:1, stop:0 #b4b4b4, stop:1 #8f8f8f);\n"
"     border: 1px solid #5c5c5c;\n"
"     width: 20px;\n"
"     height: 20px;\n"
"     margin: -2px 0; /* handle is placed by default on the contents rect of the groove. Expand outside the groove */\n"
"     border-radius: 5px;\n"
" }\n"
"\n"
""));
        horizontalSlider_3->setOrientation(Qt::Horizontal);
        horizontalSlider = new QSlider(groupBox_3);
        horizontalSlider->setObjectName(QStringLiteral("horizontalSlider"));
        horizontalSlider->setGeometry(QRect(40, 80, 181, 16));
        horizontalSlider->setStyleSheet(QLatin1String(" QSlider::groove:horizontal {\n"
"     border: 1px solid #999999;\n"
"     height: 9px; /* the groove expands to the size of the slider by default. by giving it a height, it has a fixed size */\n"
"     background: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 #B1B1B1, stop:1 #c4c4c4);\n"
"     margin: 2px 0;\n"
" }\n"
"\n"
" QSlider::handle:horizontal {\n"
"     background: qlineargradient(x1:0, y1:0, x2:1, y2:1, stop:0 #b4b4b4, stop:1 #8f8f8f);\n"
"     border: 1px solid #5c5c5c;\n"
"     width: 20px;\n"
"     height: 20px;\n"
"     margin: -2px 0; /* handle is placed by default on the contents rect of the groove. Expand outside the groove */\n"
"     border-radius: 5px;\n"
" }\n"
"\n"
""));
        horizontalSlider->setOrientation(Qt::Horizontal);
        widget8 = new QWidget(groupBox_3);
        widget8->setObjectName(QStringLiteral("widget8"));
        widget8->setGeometry(QRect(14, 17, 16, 81));
        gridLayout_5 = new QGridLayout(widget8);
        gridLayout_5->setSpacing(6);
        gridLayout_5->setContentsMargins(11, 11, 11, 11);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        gridLayout_5->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget8);
        label->setObjectName(QStringLiteral("label"));

        gridLayout_5->addWidget(label, 0, 0, 1, 1);

        label_2 = new QLabel(widget8);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout_5->addWidget(label_2, 1, 0, 1, 1);

        label_3 = new QLabel(widget8);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout_5->addWidget(label_3, 2, 0, 1, 1);

        label_26 = new QLabel(widget8);
        label_26->setObjectName(QStringLiteral("label_26"));

        gridLayout_5->addWidget(label_26, 3, 0, 1, 1);


        verticalLayout_7->addWidget(groupBox_3);

        MainWindow->setCentralWidget(centralWidget);
        layoutWidget->raise();
        widget->raise();
        groupBox->raise();
        groupBox_2->raise();
        groupBox_4->raise();
        groupBox_3->raise();
        layoutWidget->raise();
        splitter->raise();
        pushButton->raise();
        groupBox_5->raise();
        groupBox->raise();
        groupBox_7->raise();
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 810, 21));
        MainWindow->setMenuBar(menuBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);
        QObject::connect(horizontalSliderRaio, SIGNAL(valueChanged(int)), label_9, SLOT(setNum(int)));
        QObject::connect(horizontalSlider_RX, SIGNAL(valueChanged(int)), label_10, SLOT(setNum(int)));
        QObject::connect(horizontalSlider_RY, SIGNAL(valueChanged(int)), label_11, SLOT(setNum(int)));
        QObject::connect(horizontalSlider_RZ, SIGNAL(valueChanged(int)), label_12, SLOT(setNum(int)));
        QObject::connect(horizontalSlider_x, SIGNAL(valueChanged(int)), label_17, SLOT(setNum(int)));
        QObject::connect(horizontalSlider_y, SIGNAL(valueChanged(int)), label_18, SLOT(setNum(int)));
        QObject::connect(horizontalSlider_z, SIGNAL(valueChanged(int)), label_19, SLOT(setNum(int)));
        QObject::connect(horizontalSlider_4, SIGNAL(valueChanged(int)), label_20, SLOT(setNum(int)));
        QObject::connect(horizontalSlider_14, SIGNAL(valueChanged(int)), label_21, SLOT(setNum(int)));
        QObject::connect(horizontalSliderPlano_z, SIGNAL(valueChanged(int)), label_22, SLOT(setNum(int)));
        QObject::connect(corVermelha, SIGNAL(valueChanged(int)), widget_2, SLOT(recebe_verm(int)));
        QObject::connect(horizontalSlider_2, SIGNAL(valueChanged(int)), widget_2, SLOT(recebe_verd(int)));
        QObject::connect(horizontalSlider_3, SIGNAL(valueChanged(int)), widget_2, SLOT(recebe_azul(int)));
        QObject::connect(horizontalSlider, SIGNAL(valueChanged(int)), widget_2, SLOT(recebe_tranparencia()));
        QObject::connect(widget, SIGNAL(click(int,int)), MainWindow, SLOT(recebeClick(int,int)));
        QObject::connect(corVermelha, SIGNAL(valueChanged(int)), MainWindow, SLOT(mudaR(int)));
        QObject::connect(horizontalSlider_2, SIGNAL(valueChanged(int)), MainWindow, SLOT(mudaG(int)));
        QObject::connect(horizontalSlider_3, SIGNAL(valueChanged(int)), MainWindow, SLOT(mudaB(int)));
        QObject::connect(horizontalSlider_x, SIGNAL(valueChanged(int)), MainWindow, SLOT(recebe_r1(int)));
        QObject::connect(pushButton, SIGNAL(clicked()), MainWindow, SLOT(salvar()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        actionBotaCaixa->setText(QApplication::translate("MainWindow", "botaCaixa", 0));
        groupBox_5->setTitle(QApplication::translate("MainWindow", "Eixo", 0));
        radioButton_9->setText(QString());
        radioButton_7->setText(QString());
        radioButton_8->setText(QString());
        groupBox_6->setTitle(QApplication::translate("MainWindow", "Desenho", 0));
        Button_TiraCaixa->setText(QString());
        botton_tiraEsfera->setText(QString());
        botton_Esfera->setText(QString());
        button_tiraElipse->setText(QString());
        button_Elipse->setText(QString());
        Botton_Caixa->setText(QString());
        pushButton->setText(QApplication::translate("MainWindow", "Salvar", 0));
        groupBox_7->setTitle(QApplication::translate("MainWindow", "Eixo", 0));
        label_20->setText(QString());
        label_21->setText(QString());
        label_22->setText(QString());
        label_23->setText(QApplication::translate("MainWindow", " X", 0));
        label_24->setText(QApplication::translate("MainWindow", "Y", 0));
        label_25->setText(QApplication::translate("MainWindow", "Z", 0));
        groupBox->setTitle(QApplication::translate("MainWindow", "Esfera", 0));
        label_4->setText(QApplication::translate("MainWindow", "R", 0));
        label_9->setText(QString());
        groupBox_2->setTitle(QApplication::translate("MainWindow", "Elipse", 0));
        label_10->setText(QString());
        label_11->setText(QString());
        label_12->setText(QString());
        label_6->setText(QApplication::translate("MainWindow", "R1", 0));
        label_7->setText(QApplication::translate("MainWindow", "R2", 0));
        label_8->setText(QApplication::translate("MainWindow", "R3", 0));
        groupBox_4->setTitle(QApplication::translate("MainWindow", "Caixa", 0));
        label_17->setText(QString());
        label_18->setText(QString());
        label_19->setText(QString());
        label_13->setText(QApplication::translate("MainWindow", "R1", 0));
        label_14->setText(QApplication::translate("MainWindow", "R2", 0));
        label_15->setText(QApplication::translate("MainWindow", "R3", 0));
        groupBox_3->setTitle(QApplication::translate("MainWindow", " Cores", 0));
        label->setText(QApplication::translate("MainWindow", "R", 0));
        label_2->setText(QApplication::translate("MainWindow", "G", 0));
        label_3->setText(QApplication::translate("MainWindow", "B", 0));
        label_26->setText(QApplication::translate("MainWindow", "T", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
