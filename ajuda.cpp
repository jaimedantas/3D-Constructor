#include "ajuda.h"
#include "ui_ajuda.h"
#include "guia.h"
#include "tutorial.h"

Ajuda::Ajuda(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Ajuda)
{
    ui->setupUi(this);
}

Ajuda::~Ajuda()
{
    delete ui;
}

void Ajuda::on_pushButton_2_clicked()
{
    guia janelaGuia;
    janelaGuia.setModal(true);
    janelaGuia.setWindowTitle("Guia");
    janelaGuia.exec();
}

void Ajuda::on_pushButton_clicked()
{
    tutorial janelaTutorial;
    janelaTutorial.setModal(true);
    janelaTutorial.setWindowTitle("Tutorial");
    janelaTutorial.exec();
}
