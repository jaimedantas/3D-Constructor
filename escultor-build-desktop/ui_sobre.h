/********************************************************************************
** Form generated from reading UI file 'sobre.ui'
**
** Created: Thu Jun 13 23:40:23 2013
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SOBRE_H
#define UI_SOBRE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Sobre
{
public:
    QLabel *label_6;
    QLabel *label_7;
    QGroupBox *groupBox;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QPushButton *pushButton;

    void setupUi(QDialog *Sobre)
    {
        if (Sobre->objectName().isEmpty())
            Sobre->setObjectName(QString::fromUtf8("Sobre"));
        Sobre->resize(662, 328);
        label_6 = new QLabel(Sobre);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(40, 0, 121, 181));
        label_6->setPixmap(QPixmap(QString::fromUtf8(":/recursos/ufrn_pequeno.png")));
        label_7 = new QLabel(Sobre);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(40, 170, 121, 141));
        label_7->setPixmap(QPixmap(QString::fromUtf8(":/recursos/computacao_pequeno.png")));
        groupBox = new QGroupBox(Sobre);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(170, 20, 481, 221));
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
        layoutWidget = new QWidget(groupBox);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 20, 445, 201));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setPointSize(12);
        label->setFont(font);

        verticalLayout->addWidget(label);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font);

        verticalLayout->addWidget(label_2);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font);

        verticalLayout->addWidget(label_3);

        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font);

        verticalLayout->addWidget(label_4);

        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setFont(font);

        verticalLayout->addWidget(label_5);

        verticalLayout->setStretch(1, 10);
        verticalLayout->setStretch(2, 10);
        verticalLayout->setStretch(3, 10);
        verticalLayout->setStretch(4, 10);
        pushButton = new QPushButton(Sobre);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(340, 270, 100, 35));
        pushButton->setFont(font);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/recursos/contato.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon);
        pushButton->setIconSize(QSize(20, 20));

        retranslateUi(Sobre);

        QMetaObject::connectSlotsByName(Sobre);
    } // setupUi

    void retranslateUi(QDialog *Sobre)
    {
        Sobre->setWindowTitle(QApplication::translate("Sobre", "Dialog", 0, QApplication::UnicodeUTF8));
        label_6->setText(QString());
        label_7->setText(QString());
        groupBox->setTitle(QApplication::translate("Sobre", "Sobre", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("Sobre", "UNIVERSIDADE FEDERAL DO RIO GRANDE DO NORTE-UFRN", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("Sobre", "Departamento de Computa\303\247\303\243o e Automa\303\247\303\243o-DCA", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("Sobre", "Desenvolvedores: Francisco Helio da Cunha Junior e", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("Sobre", "Jaime Cristalino Jales Dantas", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("Sobre", "Disciplina : Paradigmas de Programa\303\247\303\243o ", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("Sobre", "Contato", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Sobre: public Ui_Sobre {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SOBRE_H
