/********************************************************************************
** Form generated from reading UI file 'novo.ui'
**
** Created: Tue Jun 18 10:58:01 2013
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NOVO_H
#define UI_NOVO_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Novo
{
public:
    QDialogButtonBox *buttonBox;
    QGroupBox *groupBox;
    QLineEdit *NovoZ;
    QLineEdit *NovoY;
    QLineEdit *NovoX;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;

    void setupUi(QDialog *Novo)
    {
        if (Novo->objectName().isEmpty())
            Novo->setObjectName(QString::fromUtf8("Novo"));
        Novo->resize(331, 161);
        buttonBox = new QDialogButtonBox(Novo);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(220, 50, 81, 61));
        buttonBox->setOrientation(Qt::Vertical);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        groupBox = new QGroupBox(Novo);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(30, 10, 161, 131));
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
        NovoZ = new QLineEdit(groupBox);
        NovoZ->setObjectName(QString::fromUtf8("NovoZ"));
        NovoZ->setGeometry(QRect(110, 90, 31, 31));
        NovoY = new QLineEdit(groupBox);
        NovoY->setObjectName(QString::fromUtf8("NovoY"));
        NovoY->setGeometry(QRect(110, 60, 31, 31));
        NovoX = new QLineEdit(groupBox);
        NovoX->setObjectName(QString::fromUtf8("NovoX"));
        NovoX->setGeometry(QRect(110, 30, 31, 31));
        widget = new QWidget(groupBox);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(20, 30, 85, 91));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout->addWidget(label_2);

        label_3 = new QLabel(widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout->addWidget(label_3);


        retranslateUi(Novo);
        QObject::connect(buttonBox, SIGNAL(accepted()), Novo, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), Novo, SLOT(reject()));

        QMetaObject::connectSlotsByName(Novo);
    } // setupUi

    void retranslateUi(QDialog *Novo)
    {
        Novo->setWindowTitle(QApplication::translate("Novo", "Dialog", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("Novo", "Novo Escultor", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("Novo", "Tamanho X", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("Novo", "Tamanho Y", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("Novo", "Tamanho Z", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Novo: public Ui_Novo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NOVO_H
