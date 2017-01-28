#include "sobre.h"
#include "ui_sobre.h"
#include "email.h"

Sobre::Sobre(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Sobre)
{
    ui->setupUi(this);
}

Sobre::~Sobre()
{
    delete ui;
}

void Sobre::on_pushButton_clicked()
{
    email janelaEmail;
    janelaEmail.setModal(true);
    janelaEmail.setWindowTitle("Email");
    janelaEmail.exec();
}
