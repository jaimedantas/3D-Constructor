#ifndef AJUDA_H
#define AJUDA_H

#include <QDialog>

namespace Ui {
class Ajuda;
}

class Ajuda : public QDialog
{
    Q_OBJECT
    
public:
    explicit Ajuda(QWidget *parent = 0);
    ~Ajuda();
    
private:
    Ui::Ajuda *ui;

private slots:
    void on_pushButton_clicked();
    void on_pushButton_2_clicked();
};

#endif // AJUDA_H
