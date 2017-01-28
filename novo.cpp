#include "novo.h"
#include "ui_novo.h"

Novo::Novo(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Novo)
{
    ui->setupUi(this);
}

Novo::~Novo()
{
    delete ui;
}
int Novo::PegaNovoX(){
    return ui->NovoX->text().toInt();
}
int Novo::PegaNovoY(){
    return ui->NovoY->text().toInt();
}
int Novo::PegaNovoZ(){
    return ui->NovoZ->text().toInt();

}
