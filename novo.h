#ifndef NOVO_H
#define NOVO_H

#include <QDialog>

namespace Ui {
    class Novo;
}

class Novo : public QDialog
{
    Q_OBJECT

public:
    explicit Novo(QWidget *parent = 0);
    int PegaNovoX();
    int PegaNovoY();
    int PegaNovoZ();
    ~Novo();

private:
    Ui::Novo *ui;

};

#endif // NOVO_H
