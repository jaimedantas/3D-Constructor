#include "guia.h"
#include "ui_guia.h"

guia::guia(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::guia)
{
    ui->setupUi(this);
}

guia::~guia()
{
    delete ui;
}
