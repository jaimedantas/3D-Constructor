#include "email.h"
#include "ui_email.h"

email::email(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::email)
{
    ui->setupUi(this);
}

email::~email()
{
    delete ui;
}
