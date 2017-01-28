/********************************************************************************
** Form generated from reading UI file 'ajuda.ui'
**
** Created: Thu Jun 13 23:40:23 2013
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AJUDA_H
#define UI_AJUDA_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Ajuda
{
public:
    QLabel *label;
    QGroupBox *groupBox;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *Ajuda)
    {
        if (Ajuda->objectName().isEmpty())
            Ajuda->setObjectName(QString::fromUtf8("Ajuda"));
        Ajuda->resize(706, 302);
        label = new QLabel(Ajuda);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 30, 261, 251));
        label->setPixmap(QPixmap(QString::fromUtf8(":/recursos/Help_granede.png")));
        groupBox = new QGroupBox(Ajuda);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(300, 60, 371, 171));
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
        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(70, 50, 241, 23));
        pushButton_2 = new QPushButton(groupBox);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(70, 100, 241, 23));

        retranslateUi(Ajuda);

        QMetaObject::connectSlotsByName(Ajuda);
    } // setupUi

    void retranslateUi(QDialog *Ajuda)
    {
        Ajuda->setWindowTitle(QApplication::translate("Ajuda", "Dialog", 0, QApplication::UnicodeUTF8));
        label->setText(QString());
        groupBox->setTitle(QApplication::translate("Ajuda", "Ajuda", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("Ajuda", "Tutorial - Construtor Digital", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("Ajuda", "Guia do usu\303\241rio", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Ajuda: public Ui_Ajuda {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AJUDA_H
