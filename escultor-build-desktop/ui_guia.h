/********************************************************************************
** Form generated from reading UI file 'guia.ui'
**
** Created: Tue Jun 18 11:23:25 2013
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GUIA_H
#define UI_GUIA_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_guia
{
public:
    QTextBrowser *textBrowser;
    QLabel *label;

    void setupUi(QDialog *guia)
    {
        if (guia->objectName().isEmpty())
            guia->setObjectName(QString::fromUtf8("guia"));
        guia->resize(740, 269);
        textBrowser = new QTextBrowser(guia);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(120, 20, 601, 231));
        textBrowser->setStyleSheet(QString::fromUtf8("background-color: rgb(229, 229, 229);"));
        label = new QLabel(guia);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 70, 111, 131));
        label->setPixmap(QPixmap(QString::fromUtf8(":/recursos/guia.png")));

        retranslateUi(guia);

        QMetaObject::connectSlotsByName(guia);
    } // setupUi

    void retranslateUi(QDialog *guia)
    {
        guia->setWindowTitle(QApplication::translate("guia", "Dialog", 0, QApplication::UnicodeUTF8));
        textBrowser->setHtml(QApplication::translate("guia", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">1 - <span style=\" font-weight:600;\">EIXO</span>: Seleciona qual eixo ser\303\241 feito o desenho</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">2 - <span style=\" font-weight:600;\">DESENHO</span>: Seleciona o tipo de desenho que ser\303\241 desenhado ou removido</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">3 - <span style=\" font-weight:600;\">ESFERA</span>: Seleciona o raio da esfera</p>\n"
"<p st"
                        "yle=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">4 - <span style=\" font-weight:600;\">ELIPSE</span>: Seleciona os raios X e Y da elipse e a profundidade Z</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">5 - <span style=\" font-weight:600;\">CAIXA</span>: Seleciona o lados da caixa</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">6 - <span style=\" font-weight:600;\">CORES</span>: Seleciona a cor do desenho</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">7 - <span style=\" font-weight:600;\">EIXO</span>: Seleciona a posi\303\247\303\243o do eixo atual de desenho X, Y e Z</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">8 - <span"
                        " style=\" font-weight:600;\">SALVAR</span>: Salva o projeto na exten\303\247\303\243o .off</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">9 - <span style=\" font-weight:600;\">MENU</span>: Barra de menu principal</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">	9.1-<span style=\" text-decoration: underline;\">Novo Escultor</span>: Cria uma nova matriz de desenho para um novo Escultor</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">	9.2- <span style=\" text-decoration: underline;\">Salvar</span>: Salva o arquivo .off</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">	9.3 -<span style=\" text-decoration: underline;\">Sair</span>: Fecha o programa</p></body></html>", 0, QApplication::UnicodeUTF8));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class guia: public Ui_guia {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GUIA_H
