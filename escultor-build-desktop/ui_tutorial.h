/********************************************************************************
** Form generated from reading UI file 'tutorial.ui'
**
** Created: Thu Jun 13 23:40:23 2013
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TUTORIAL_H
#define UI_TUTORIAL_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_tutorial
{
public:
    QTextBrowser *textBrowser;
    QLabel *label;

    void setupUi(QDialog *tutorial)
    {
        if (tutorial->objectName().isEmpty())
            tutorial->setObjectName(QString::fromUtf8("tutorial"));
        tutorial->resize(485, 145);
        textBrowser = new QTextBrowser(tutorial);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(130, 10, 341, 121));
        textBrowser->setStyleSheet(QString::fromUtf8("background-color: rgb(229, 229, 229);"));
        label = new QLabel(tutorial);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 30, 111, 91));
        label->setPixmap(QPixmap(QString::fromUtf8(":/recursos/cubo_escultor.png")));

        retranslateUi(tutorial);

        QMetaObject::connectSlotsByName(tutorial);
    } // setupUi

    void retranslateUi(QDialog *tutorial)
    {
        tutorial->setWindowTitle(QApplication::translate("tutorial", "Dialog", 0, QApplication::UnicodeUTF8));
        textBrowser->setHtml(QApplication::translate("tutorial", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><a href=\"http://dl.dropboxusercontent.com/u/21118894/cpp/cha.projetos.html#sec.projetos.escultor\"><span style=\" text-decoration: underline; color:#000000;\">Link</span></a><span style=\" color:#000000;\"> Tutorial Internet de um Escultor Digital</span></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><a href=\"http://dl.dropboxusercontent.com/u/21118894/cpp/index.html\"><span style=\" text-decoration: underline; color:#0000ff;\">http://dl.dropboxuse"
                        "rcontent.com/u/21118894/cpp/index.html</span></a></p>\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; text-decoration: underline; color:#0000ff;\"></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Programa\303\247\303\243o Orientada a Objetos em C++</p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Copyright \302\251 2012 Agostinho Brito - DCA/UFRN</p></body></html>", 0, QApplication::UnicodeUTF8));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class tutorial: public Ui_tutorial {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TUTORIAL_H
