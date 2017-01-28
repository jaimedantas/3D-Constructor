#ifndef EMAIL_H
#define EMAIL_H

#include <QDialog>

namespace Ui {
    class email;
}

class email : public QDialog
{
    Q_OBJECT

public:
    explicit email(QWidget *parent = 0);
    ~email();

private:
    Ui::email *ui;
};

#endif // EMAIL_H
