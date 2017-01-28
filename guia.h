#ifndef GUIA_H
#define GUIA_H

#include <QDialog>

namespace Ui {
    class guia;
}

class guia : public QDialog
{
    Q_OBJECT

public:
    explicit guia(QWidget *parent = 0);
    ~guia();

private:
    Ui::guia *ui;
};

#endif // GUIA_H
