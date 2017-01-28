/********************************************************************************
** Form generated from reading UI file 'email.ui'
**
** Created: Thu Jun 13 23:40:23 2013
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EMAIL_H
#define UI_EMAIL_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>

QT_BEGIN_NAMESPACE

class Ui_email
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;

    void setupUi(QDialog *email)
    {
        if (email->objectName().isEmpty())
            email->setObjectName(QString::fromUtf8("email"));
        email->resize(400, 115);
        label = new QLabel(email);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 0, 121, 111));
        label->setPixmap(QPixmap(QString::fromUtf8(":/recursos/email.png")));
        label_2 = new QLabel(email);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(160, 30, 171, 17));
        label_3 = new QLabel(email);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(160, 70, 181, 17));

        retranslateUi(email);

        QMetaObject::connectSlotsByName(email);
    } // setupUi

    void retranslateUi(QDialog *email)
    {
        email->setWindowTitle(QApplication::translate("email", "Dialog", 0, QApplication::UnicodeUTF8));
        label->setText(QString());
        label_2->setText(QApplication::translate("email", "jaimejales@hotmail.com", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("email", "junior.f.h.c@hotmail.com", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class email: public Ui_email {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EMAIL_H
