/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Tue Jun 18 16:33:47 2013
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QSlider>
#include <QtGui/QSplitter>
#include <QtGui/QStatusBar>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "cores.h"
#include "painel.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionSobre;
    QAction *actionAjuda;
    QAction *actionSalvar;
    QAction *actionSair;
    QAction *actionNovo_Escultor;
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
    QSlider *horizontalSliderPlano_X;
    QSlider *horizontalSliderPlano_Y;
    QSlider *horizontalSliderPlano_z;
    QWidget *layoutWidget2;
    QGridLayout *gridLayout_6;
    QLabel *label_20;
    QLabel *label_21;
    QLabel *label_22;
    QWidget *layoutWidget3;
    QGridLayout *gridLayout_7;
    QLabel *label_23;
    QLabel *label_24;
    QLabel *label_25;
    QLabel *label_5;
    QGroupBox *groupBox;
    QSlider *horizontalSliderRaio;
    QLabel *label_4;
    QLabel *label_9;
    QGroupBox *groupBox_2;
    QSlider *horizontalSlider_RX;
    QSlider *horizontalSlider_RY;
    QSlider *horizontalSlider_RZ;
    QWidget *layoutWidget4;
    QGridLayout *gridLayout;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QWidget *layoutWidget5;
    QGridLayout *gridLayout_2;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QGroupBox *groupBox_4;
    QSlider *horizontalSlider_x;
    QSlider *horizontalSlider_y;
    QSlider *horizontalSlider_z;
    QWidget *layoutWidget6;
    QGridLayout *gridLayout_3;
    QLabel *label_17;
    QLabel *label_18;
    QLabel *label_19;
    QWidget *layoutWidget7;
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
    QWidget *layoutWidget8;
    QGridLayout *gridLayout_5;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_26;
    QFrame *line;
    QStatusBar *statusBar;
    QMenuBar *menuBar;
    QMenu *menuMenu;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(813, 716);
        MainWindow->setStyleSheet(QString::fromUtf8("color: rgb(85, 85, 255);"));
        MainWindow->setIconSize(QSize(50, 50));
        actionSobre = new QAction(MainWindow);
        actionSobre->setObjectName(QString::fromUtf8("actionSobre"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/recursos/sobre.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSobre->setIcon(icon);
        actionAjuda = new QAction(MainWindow);
        actionAjuda->setObjectName(QString::fromUtf8("actionAjuda"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/recursos/Help.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAjuda->setIcon(icon1);
        actionSalvar = new QAction(MainWindow);
        actionSalvar->setObjectName(QString::fromUtf8("actionSalvar"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/recursos/1371102896_floppy_disk_save.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSalvar->setIcon(icon2);
        actionSair = new QAction(MainWindow);
        actionSair->setObjectName(QString::fromUtf8("actionSair"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/recursos/exit.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSair->setIcon(icon3);
        actionNovo_Escultor = new QAction(MainWindow);
        actionNovo_Escultor->setObjectName(QString::fromUtf8("actionNovo_Escultor"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/recursos/new_document.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionNovo_Escultor->setIcon(icon4);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        splitter = new QSplitter(centralWidget);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setGeometry(QRect(0, 0, 16, 16));
        splitter->setOrientation(Qt::Horizontal);
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(0, 0, 16, 16));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget);
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        layoutWidget1 = new QWidget(centralWidget);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(10, 0, 791, 91));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        groupBox_5 = new QGroupBox(layoutWidget1);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        groupBox_5->setStyleSheet(QString::fromUtf8("QGroupBox {\n"
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
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        gridLayout_17 = new QGridLayout();
        gridLayout_17->setSpacing(6);
        gridLayout_17->setObjectName(QString::fromUtf8("gridLayout_17"));
        radioButton_9 = new QRadioButton(groupBox_5);
        radioButton_9->setObjectName(QString::fromUtf8("radioButton_9"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/recursos/eixo_x.png"), QSize(), QIcon::Normal, QIcon::Off);
        radioButton_9->setIcon(icon5);
        radioButton_9->setIconSize(QSize(50, 50));

        gridLayout_17->addWidget(radioButton_9, 0, 0, 1, 1);

        radioButton_7 = new QRadioButton(groupBox_5);
        radioButton_7->setObjectName(QString::fromUtf8("radioButton_7"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/recursos/eixo_y.png"), QSize(), QIcon::Normal, QIcon::Off);
        radioButton_7->setIcon(icon6);
        radioButton_7->setIconSize(QSize(50, 50));

        gridLayout_17->addWidget(radioButton_7, 0, 1, 1, 1);

        radioButton_8 = new QRadioButton(groupBox_5);
        radioButton_8->setObjectName(QString::fromUtf8("radioButton_8"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/recursos/eixo_z.png"), QSize(), QIcon::Normal, QIcon::Off);
        radioButton_8->setIcon(icon7);
        radioButton_8->setIconSize(QSize(50, 50));

        gridLayout_17->addWidget(radioButton_8, 0, 2, 1, 1);


        verticalLayout_8->addLayout(gridLayout_17);


        horizontalLayout_2->addWidget(groupBox_5);

        groupBox_6 = new QGroupBox(layoutWidget1);
        groupBox_6->setObjectName(QString::fromUtf8("groupBox_6"));
        groupBox_6->setStyleSheet(QString::fromUtf8("QGroupBox {\n"
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
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        gridLayout_18 = new QGridLayout();
        gridLayout_18->setSpacing(6);
        gridLayout_18->setObjectName(QString::fromUtf8("gridLayout_18"));
        Button_TiraCaixa = new QRadioButton(groupBox_6);
        Button_TiraCaixa->setObjectName(QString::fromUtf8("Button_TiraCaixa"));
        Button_TiraCaixa->setStyleSheet(QString::fromUtf8("border-bottom-color: rgb(0, 85, 255);"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/recursos/semcaixa.png"), QSize(), QIcon::Normal, QIcon::Off);
        Button_TiraCaixa->setIcon(icon8);
        Button_TiraCaixa->setIconSize(QSize(50, 50));

        gridLayout_18->addWidget(Button_TiraCaixa, 1, 1, 1, 1);

        botton_tiraEsfera = new QRadioButton(groupBox_6);
        botton_tiraEsfera->setObjectName(QString::fromUtf8("botton_tiraEsfera"));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/recursos/semcirculo.png"), QSize(), QIcon::Normal, QIcon::Off);
        botton_tiraEsfera->setIcon(icon9);
        botton_tiraEsfera->setIconSize(QSize(50, 50));

        gridLayout_18->addWidget(botton_tiraEsfera, 1, 3, 1, 1);

        botton_Esfera = new QRadioButton(groupBox_6);
        botton_Esfera->setObjectName(QString::fromUtf8("botton_Esfera"));
        botton_Esfera->setStyleSheet(QString::fromUtf8(""));
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/recursos/circulo.png"), QSize(), QIcon::Normal, QIcon::Off);
        botton_Esfera->setIcon(icon10);
        botton_Esfera->setIconSize(QSize(50, 50));

        gridLayout_18->addWidget(botton_Esfera, 1, 2, 1, 1);

        button_tiraElipse = new QRadioButton(groupBox_6);
        button_tiraElipse->setObjectName(QString::fromUtf8("button_tiraElipse"));
        button_tiraElipse->setStyleSheet(QString::fromUtf8(""));
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/recursos/semelipse.png"), QSize(), QIcon::Normal, QIcon::Off);
        button_tiraElipse->setIcon(icon11);
        button_tiraElipse->setIconSize(QSize(50, 50));

        gridLayout_18->addWidget(button_tiraElipse, 1, 6, 1, 1);

        button_Elipse = new QRadioButton(groupBox_6);
        button_Elipse->setObjectName(QString::fromUtf8("button_Elipse"));
        button_Elipse->setStyleSheet(QString::fromUtf8(""));
        QIcon icon12;
        icon12.addFile(QString::fromUtf8(":/recursos/elipse.png"), QSize(), QIcon::Normal, QIcon::Off);
        button_Elipse->setIcon(icon12);
        button_Elipse->setIconSize(QSize(50, 50));

        gridLayout_18->addWidget(button_Elipse, 1, 5, 1, 1);

        Botton_Caixa = new QRadioButton(groupBox_6);
        Botton_Caixa->setObjectName(QString::fromUtf8("Botton_Caixa"));
        Botton_Caixa->setStyleSheet(QString::fromUtf8(""));
        QIcon icon13;
        icon13.addFile(QString::fromUtf8(":/recursos/caixa.png"), QSize(), QIcon::Normal, QIcon::Off);
        Botton_Caixa->setIcon(icon13);
        Botton_Caixa->setIconSize(QSize(50, 50));

        gridLayout_18->addWidget(Botton_Caixa, 1, 0, 1, 1);


        horizontalLayout->addLayout(gridLayout_18);


        horizontalLayout_2->addWidget(groupBox_6);

        widget = new Painel(centralWidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(11, 110, 441, 441));
        widget->setStyleSheet(QString::fromUtf8("\n"
"     border: 2px solid gray;\n"
"     border-radius: 1px;\n"
"     padding: 1px;\n"
"\n"
"/*border-left-color: rgb(85, 170, 0);\n"
"border-top-color: rgb(170, 0, 255);*/"));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(470, 600, 150, 50));
        QFont font;
        font.setPointSize(14);
        pushButton->setFont(font);
        pushButton->setIcon(icon2);
        pushButton->setIconSize(QSize(40, 40));
        groupBox_7 = new QGroupBox(centralWidget);
        groupBox_7->setObjectName(QString::fromUtf8("groupBox_7"));
        groupBox_7->setGeometry(QRect(11, 560, 441, 111));
        groupBox_7->setStyleSheet(QString::fromUtf8("QGroupBox {\n"
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
        horizontalSliderPlano_X = new QSlider(groupBox_7);
        horizontalSliderPlano_X->setObjectName(QString::fromUtf8("horizontalSliderPlano_X"));
        horizontalSliderPlano_X->setGeometry(QRect(40, 20, 351, 20));
        horizontalSliderPlano_X->setCursor(QCursor(Qt::PointingHandCursor));
        horizontalSliderPlano_X->setStyleSheet(QString::fromUtf8(" QSlider::groove:horizontal {\n"
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
        horizontalSliderPlano_X->setOrientation(Qt::Horizontal);
        horizontalSliderPlano_Y = new QSlider(groupBox_7);
        horizontalSliderPlano_Y->setObjectName(QString::fromUtf8("horizontalSliderPlano_Y"));
        horizontalSliderPlano_Y->setGeometry(QRect(40, 50, 351, 20));
        horizontalSliderPlano_Y->setCursor(QCursor(Qt::PointingHandCursor));
        horizontalSliderPlano_Y->setStyleSheet(QString::fromUtf8(" QSlider::groove:horizontal {\n"
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
        horizontalSliderPlano_Y->setOrientation(Qt::Horizontal);
        horizontalSliderPlano_z = new QSlider(groupBox_7);
        horizontalSliderPlano_z->setObjectName(QString::fromUtf8("horizontalSliderPlano_z"));
        horizontalSliderPlano_z->setGeometry(QRect(40, 80, 351, 20));
        horizontalSliderPlano_z->setCursor(QCursor(Qt::PointingHandCursor));
        horizontalSliderPlano_z->setStyleSheet(QString::fromUtf8(" QSlider::groove:horizontal {\n"
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
        layoutWidget2 = new QWidget(groupBox_7);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(400, 20, 31, 83));
        gridLayout_6 = new QGridLayout(layoutWidget2);
        gridLayout_6->setSpacing(6);
        gridLayout_6->setContentsMargins(11, 11, 11, 11);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        gridLayout_6->setContentsMargins(0, 0, 0, 0);
        label_20 = new QLabel(layoutWidget2);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        label_20->setStyleSheet(QString::fromUtf8("QFrame, QLabel, QToolTip {\n"
"     border: 2px solid gray;\n"
"     border-radius: 1px;\n"
"     padding: 1px;\n"
"	font: 11pt \"MS Shell Dlg 2\";\n"
" }"));
        label_20->setFrameShape(QFrame::Panel);

        gridLayout_6->addWidget(label_20, 0, 0, 1, 1);

        label_21 = new QLabel(layoutWidget2);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        label_21->setStyleSheet(QString::fromUtf8("QFrame, QLabel, QToolTip {\n"
"     border: 2px solid gray;\n"
"     border-radius: 1px;\n"
"     padding: 1px;\n"
"	font: 11pt \"MS Shell Dlg 2\";\n"
" }"));
        label_21->setFrameShape(QFrame::Panel);

        gridLayout_6->addWidget(label_21, 1, 0, 1, 1);

        label_22 = new QLabel(layoutWidget2);
        label_22->setObjectName(QString::fromUtf8("label_22"));
        label_22->setStyleSheet(QString::fromUtf8("QFrame, QLabel, QToolTip {\n"
"     border: 2px solid gray;\n"
"     border-radius: 1px;\n"
"     padding: 1px;\n"
"	font: 11pt \"MS Shell Dlg 2\";\n"
" }"));
        label_22->setFrameShape(QFrame::Panel);

        gridLayout_6->addWidget(label_22, 2, 0, 1, 1);

        layoutWidget3 = new QWidget(groupBox_7);
        layoutWidget3->setObjectName(QString::fromUtf8("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(10, 20, 21, 81));
        gridLayout_7 = new QGridLayout(layoutWidget3);
        gridLayout_7->setSpacing(6);
        gridLayout_7->setContentsMargins(11, 11, 11, 11);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        gridLayout_7->setContentsMargins(0, 0, 0, 0);
        label_23 = new QLabel(layoutWidget3);
        label_23->setObjectName(QString::fromUtf8("label_23"));

        gridLayout_7->addWidget(label_23, 0, 0, 1, 1);

        label_24 = new QLabel(layoutWidget3);
        label_24->setObjectName(QString::fromUtf8("label_24"));

        gridLayout_7->addWidget(label_24, 1, 0, 1, 1);

        label_25 = new QLabel(layoutWidget3);
        label_25->setObjectName(QString::fromUtf8("label_25"));

        gridLayout_7->addWidget(label_25, 2, 0, 1, 1);

        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(660, 570, 111, 101));
        label_5->setPixmap(QPixmap(QString::fromUtf8(":/recursos/escultor_2_pequeno.png")));
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(471, 101, 329, 113));
        groupBox->setStyleSheet(QString::fromUtf8("QGroupBox {\n"
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
        horizontalSliderRaio->setObjectName(QString::fromUtf8("horizontalSliderRaio"));
        horizontalSliderRaio->setGeometry(QRect(40, 40, 231, 20));
        horizontalSliderRaio->setCursor(QCursor(Qt::PointingHandCursor));
        horizontalSliderRaio->setStyleSheet(QString::fromUtf8(" QSlider::groove:horizontal {\n"
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
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(20, 40, 16, 16));
        label_9 = new QLabel(groupBox);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(280, 40, 31, 31));
        label_9->setStyleSheet(QString::fromUtf8("QFrame, QLabel, QToolTip {\n"
"     border: 2px solid gray;\n"
"     border-radius: 1px;\n"
"     padding: 1px;\n"
"	font: 11pt \"MS Shell Dlg 2\";\n"
" }"));
        label_9->setFrameShape(QFrame::Panel);
        groupBox_2 = new QGroupBox(centralWidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(471, 220, 329, 113));
        groupBox_2->setStyleSheet(QString::fromUtf8("QGroupBox {\n"
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
        horizontalSlider_RX->setObjectName(QString::fromUtf8("horizontalSlider_RX"));
        horizontalSlider_RX->setEnabled(true);
        horizontalSlider_RX->setGeometry(QRect(40, 22, 231, 16));
        horizontalSlider_RX->setSizeIncrement(QSize(10, 10));
        horizontalSlider_RX->setBaseSize(QSize(10, 10));
        QFont font1;
        font1.setPointSize(8);
        horizontalSlider_RX->setFont(font1);
        horizontalSlider_RX->setCursor(QCursor(Qt::PointingHandCursor));
        horizontalSlider_RX->setStyleSheet(QString::fromUtf8(" QSlider::groove:horizontal {\n"
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
        horizontalSlider_RY->setObjectName(QString::fromUtf8("horizontalSlider_RY"));
        horizontalSlider_RY->setGeometry(QRect(40, 50, 231, 16));
        horizontalSlider_RY->setCursor(QCursor(Qt::PointingHandCursor));
        horizontalSlider_RY->setStyleSheet(QString::fromUtf8(" QSlider::groove:horizontal {\n"
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
        horizontalSlider_RZ->setObjectName(QString::fromUtf8("horizontalSlider_RZ"));
        horizontalSlider_RZ->setGeometry(QRect(40, 80, 231, 16));
        horizontalSlider_RZ->setCursor(QCursor(Qt::PointingHandCursor));
        horizontalSlider_RZ->setStyleSheet(QString::fromUtf8(" QSlider::groove:horizontal {\n"
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
        layoutWidget4 = new QWidget(groupBox_2);
        layoutWidget4->setObjectName(QString::fromUtf8("layoutWidget4"));
        layoutWidget4->setGeometry(QRect(280, 20, 31, 83));
        gridLayout = new QGridLayout(layoutWidget4);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_10 = new QLabel(layoutWidget4);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setStyleSheet(QString::fromUtf8("QFrame, QLabel, QToolTip {\n"
"     border: 2px solid gray;\n"
"     border-radius: 1px;\n"
"     padding: 1px;\n"
"	font: 11pt \"MS Shell Dlg 2\";\n"
" }"));
        label_10->setFrameShape(QFrame::Panel);

        gridLayout->addWidget(label_10, 0, 0, 1, 1);

        label_11 = new QLabel(layoutWidget4);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setStyleSheet(QString::fromUtf8("QFrame, QLabel, QToolTip {\n"
"     border: 2px solid gray;\n"
"     border-radius: 1px;\n"
"     padding: 1px;\n"
"	font: 11pt \"MS Shell Dlg 2\";\n"
" }"));
        label_11->setFrameShape(QFrame::Panel);

        gridLayout->addWidget(label_11, 1, 0, 1, 1);

        label_12 = new QLabel(layoutWidget4);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setStyleSheet(QString::fromUtf8("QFrame, QLabel, QToolTip {\n"
"     border: 2px solid gray;\n"
"     border-radius: 1px;\n"
"     padding: 1px;\n"
"	font: 11pt \"MS Shell Dlg 2\";\n"
" }"));
        label_12->setFrameShape(QFrame::Panel);

        gridLayout->addWidget(label_12, 2, 0, 1, 1);

        layoutWidget5 = new QWidget(groupBox_2);
        layoutWidget5->setObjectName(QString::fromUtf8("layoutWidget5"));
        layoutWidget5->setGeometry(QRect(13, 16, 21, 81));
        gridLayout_2 = new QGridLayout(layoutWidget5);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(layoutWidget5);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout_2->addWidget(label_6, 0, 0, 1, 1);

        label_7 = new QLabel(layoutWidget5);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout_2->addWidget(label_7, 1, 0, 1, 1);

        label_8 = new QLabel(layoutWidget5);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout_2->addWidget(label_8, 2, 0, 1, 1);

        groupBox_4 = new QGroupBox(centralWidget);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        groupBox_4->setGeometry(QRect(470, 340, 331, 111));
        groupBox_4->setStyleSheet(QString::fromUtf8("QGroupBox {\n"
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
        horizontalSlider_x->setObjectName(QString::fromUtf8("horizontalSlider_x"));
        horizontalSlider_x->setGeometry(QRect(40, 20, 231, 16));
        horizontalSlider_x->setCursor(QCursor(Qt::PointingHandCursor));
        horizontalSlider_x->setStyleSheet(QString::fromUtf8(" QSlider::groove:horizontal {\n"
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
        horizontalSlider_y->setObjectName(QString::fromUtf8("horizontalSlider_y"));
        horizontalSlider_y->setGeometry(QRect(40, 50, 231, 16));
        horizontalSlider_y->setCursor(QCursor(Qt::PointingHandCursor));
        horizontalSlider_y->setStyleSheet(QString::fromUtf8(" QSlider::groove:horizontal {\n"
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
        horizontalSlider_z->setObjectName(QString::fromUtf8("horizontalSlider_z"));
        horizontalSlider_z->setGeometry(QRect(40, 80, 231, 16));
        horizontalSlider_z->setCursor(QCursor(Qt::PointingHandCursor));
        horizontalSlider_z->setStyleSheet(QString::fromUtf8(" QSlider::groove:horizontal {\n"
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
        layoutWidget6 = new QWidget(groupBox_4);
        layoutWidget6->setObjectName(QString::fromUtf8("layoutWidget6"));
        layoutWidget6->setGeometry(QRect(280, 20, 31, 83));
        gridLayout_3 = new QGridLayout(layoutWidget6);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        label_17 = new QLabel(layoutWidget6);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setStyleSheet(QString::fromUtf8("QFrame, QLabel, QToolTip {\n"
"     border: 2px solid gray;\n"
"     border-radius: 1px;\n"
"     padding: 1px;\n"
"	font: 11pt \"MS Shell Dlg 2\";\n"
" }"));
        label_17->setFrameShape(QFrame::Box);

        gridLayout_3->addWidget(label_17, 0, 0, 1, 1);

        label_18 = new QLabel(layoutWidget6);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setStyleSheet(QString::fromUtf8("QFrame, QLabel, QToolTip {\n"
"     border: 2px solid gray;\n"
"     border-radius: 1px;\n"
"     padding: 1px;\n"
"	font: 11pt \"MS Shell Dlg 2\";\n"
" }"));
        label_18->setFrameShape(QFrame::Panel);

        gridLayout_3->addWidget(label_18, 1, 0, 1, 1);

        label_19 = new QLabel(layoutWidget6);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        label_19->setStyleSheet(QString::fromUtf8("QFrame, QLabel, QToolTip {\n"
"     border: 2px solid gray;\n"
"     border-radius: 1px;\n"
"     padding: 1px;\n"
"	font: 11pt \"MS Shell Dlg 2\";\n"
" }"));
        label_19->setFrameShape(QFrame::Panel);

        gridLayout_3->addWidget(label_19, 2, 0, 1, 1);

        layoutWidget7 = new QWidget(groupBox_4);
        layoutWidget7->setObjectName(QString::fromUtf8("layoutWidget7"));
        layoutWidget7->setGeometry(QRect(12, 15, 21, 81));
        gridLayout_4 = new QGridLayout(layoutWidget7);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        label_13 = new QLabel(layoutWidget7);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        gridLayout_4->addWidget(label_13, 0, 0, 1, 1);

        label_14 = new QLabel(layoutWidget7);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        gridLayout_4->addWidget(label_14, 1, 0, 1, 1);

        label_15 = new QLabel(layoutWidget7);
        label_15->setObjectName(QString::fromUtf8("label_15"));

        gridLayout_4->addWidget(label_15, 2, 0, 1, 1);

        groupBox_3 = new QGroupBox(centralWidget);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(471, 457, 329, 113));
        groupBox_3->setStyleSheet(QString::fromUtf8("QGroupBox {\n"
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
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        widget_2->setGeometry(QRect(230, 20, 81, 81));
        widget_2->setStyleSheet(QString::fromUtf8("\n"
"     border: 2px solid gray;\n"
"     border-radius: 1px;\n"
"     padding: 1px;\n"
""));
        corVermelha = new QSlider(groupBox_3);
        corVermelha->setObjectName(QString::fromUtf8("corVermelha"));
        corVermelha->setGeometry(QRect(40, 20, 181, 16));
        corVermelha->setCursor(QCursor(Qt::PointingHandCursor));
        corVermelha->setStyleSheet(QString::fromUtf8(" QSlider::groove:horizontal {\n"
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
        horizontalSlider_2->setObjectName(QString::fromUtf8("horizontalSlider_2"));
        horizontalSlider_2->setGeometry(QRect(40, 40, 181, 16));
        horizontalSlider_2->setCursor(QCursor(Qt::PointingHandCursor));
        horizontalSlider_2->setStyleSheet(QString::fromUtf8(" QSlider::groove:horizontal {\n"
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
        horizontalSlider_3->setObjectName(QString::fromUtf8("horizontalSlider_3"));
        horizontalSlider_3->setGeometry(QRect(40, 60, 181, 16));
        horizontalSlider_3->setCursor(QCursor(Qt::PointingHandCursor));
        horizontalSlider_3->setStyleSheet(QString::fromUtf8(" QSlider::groove:horizontal {\n"
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
        horizontalSlider->setObjectName(QString::fromUtf8("horizontalSlider"));
        horizontalSlider->setGeometry(QRect(40, 80, 181, 16));
        horizontalSlider->setCursor(QCursor(Qt::PointingHandCursor));
        horizontalSlider->setStyleSheet(QString::fromUtf8(" QSlider::groove:horizontal {\n"
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
        layoutWidget8 = new QWidget(groupBox_3);
        layoutWidget8->setObjectName(QString::fromUtf8("layoutWidget8"));
        layoutWidget8->setGeometry(QRect(14, 17, 16, 88));
        gridLayout_5 = new QGridLayout(layoutWidget8);
        gridLayout_5->setSpacing(6);
        gridLayout_5->setContentsMargins(11, 11, 11, 11);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        gridLayout_5->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget8);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_5->addWidget(label, 0, 0, 1, 1);

        label_2 = new QLabel(layoutWidget8);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_5->addWidget(label_2, 1, 0, 1, 1);

        label_3 = new QLabel(layoutWidget8);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout_5->addWidget(label_3, 2, 0, 1, 1);

        label_26 = new QLabel(layoutWidget8);
        label_26->setObjectName(QString::fromUtf8("label_26"));

        gridLayout_5->addWidget(label_26, 3, 0, 1, 1);

        line = new QFrame(centralWidget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(-3, -10, 861, 20));
        line->setStyleSheet(QString::fromUtf8(""));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        MainWindow->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 813, 23));
        menuMenu = new QMenu(menuBar);
        menuMenu->setObjectName(QString::fromUtf8("menuMenu"));
        MainWindow->setMenuBar(menuBar);

        menuBar->addAction(menuMenu->menuAction());
        menuMenu->addAction(actionNovo_Escultor);
        menuMenu->addAction(actionSobre);
        menuMenu->addAction(actionAjuda);
        menuMenu->addAction(actionSalvar);
        menuMenu->addAction(actionSair);

        retranslateUi(MainWindow);
        QObject::connect(horizontalSliderRaio, SIGNAL(valueChanged(int)), label_9, SLOT(setNum(int)));
        QObject::connect(horizontalSlider_RX, SIGNAL(valueChanged(int)), label_10, SLOT(setNum(int)));
        QObject::connect(horizontalSlider_RY, SIGNAL(valueChanged(int)), label_11, SLOT(setNum(int)));
        QObject::connect(horizontalSlider_RZ, SIGNAL(valueChanged(int)), label_12, SLOT(setNum(int)));
        QObject::connect(horizontalSlider_x, SIGNAL(valueChanged(int)), label_17, SLOT(setNum(int)));
        QObject::connect(horizontalSlider_y, SIGNAL(valueChanged(int)), label_18, SLOT(setNum(int)));
        QObject::connect(horizontalSlider_z, SIGNAL(valueChanged(int)), label_19, SLOT(setNum(int)));
        QObject::connect(horizontalSliderPlano_X, SIGNAL(valueChanged(int)), label_20, SLOT(setNum(int)));
        QObject::connect(horizontalSliderPlano_Y, SIGNAL(valueChanged(int)), label_21, SLOT(setNum(int)));
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
        QObject::connect(menuBar, SIGNAL(highlighted(int)), MainWindow, SLOT(on_actionSair_triggered()));
        QObject::connect(horizontalSliderPlano_z, SIGNAL(actionTriggered(int)), MainWindow, SLOT(mudaPlano(int)));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0, QApplication::UnicodeUTF8));
        actionSobre->setText(QApplication::translate("MainWindow", "Sobre", 0, QApplication::UnicodeUTF8));
        actionAjuda->setText(QApplication::translate("MainWindow", "Ajuda", 0, QApplication::UnicodeUTF8));
        actionSalvar->setText(QApplication::translate("MainWindow", "Salvar", 0, QApplication::UnicodeUTF8));
        actionSair->setText(QApplication::translate("MainWindow", "Sair", 0, QApplication::UnicodeUTF8));
        actionNovo_Escultor->setText(QApplication::translate("MainWindow", "Novo Escultor", 0, QApplication::UnicodeUTF8));
        groupBox_5->setTitle(QApplication::translate("MainWindow", "Eixo", 0, QApplication::UnicodeUTF8));
        radioButton_9->setText(QString());
        radioButton_7->setText(QString());
        radioButton_8->setText(QString());
        groupBox_6->setTitle(QApplication::translate("MainWindow", "Desenho", 0, QApplication::UnicodeUTF8));
        Button_TiraCaixa->setText(QString());
        botton_tiraEsfera->setText(QString());
        botton_Esfera->setText(QString());
        button_tiraElipse->setText(QString());
        button_Elipse->setText(QString());
        Botton_Caixa->setText(QString());
        pushButton->setText(QApplication::translate("MainWindow", "Salvar", 0, QApplication::UnicodeUTF8));
        groupBox_7->setTitle(QApplication::translate("MainWindow", "Eixo", 0, QApplication::UnicodeUTF8));
        label_20->setText(QString());
        label_21->setText(QString());
        label_22->setText(QString());
        label_23->setText(QApplication::translate("MainWindow", "X", 0, QApplication::UnicodeUTF8));
        label_24->setText(QApplication::translate("MainWindow", "Y", 0, QApplication::UnicodeUTF8));
        label_25->setText(QApplication::translate("MainWindow", "Z", 0, QApplication::UnicodeUTF8));
        label_5->setText(QString());
        groupBox->setTitle(QApplication::translate("MainWindow", "Esfera", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("MainWindow", "R", 0, QApplication::UnicodeUTF8));
        label_9->setText(QString());
        groupBox_2->setTitle(QApplication::translate("MainWindow", "Elipse", 0, QApplication::UnicodeUTF8));
        label_10->setText(QString());
        label_11->setText(QString());
        label_12->setText(QString());
        label_6->setText(QApplication::translate("MainWindow", "R1", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("MainWindow", "R2", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("MainWindow", "R3", 0, QApplication::UnicodeUTF8));
        groupBox_4->setTitle(QApplication::translate("MainWindow", "Caixa", 0, QApplication::UnicodeUTF8));
        label_17->setText(QString());
        label_18->setText(QString());
        label_19->setText(QString());
        label_13->setText(QApplication::translate("MainWindow", "R1", 0, QApplication::UnicodeUTF8));
        label_14->setText(QApplication::translate("MainWindow", "R2", 0, QApplication::UnicodeUTF8));
        label_15->setText(QApplication::translate("MainWindow", "R3", 0, QApplication::UnicodeUTF8));
        groupBox_3->setTitle(QApplication::translate("MainWindow", " Cores", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("MainWindow", "R", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("MainWindow", "G", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("MainWindow", "B", 0, QApplication::UnicodeUTF8));
        label_26->setText(QApplication::translate("MainWindow", "T", 0, QApplication::UnicodeUTF8));
        menuMenu->setTitle(QApplication::translate("MainWindow", "Menu", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
