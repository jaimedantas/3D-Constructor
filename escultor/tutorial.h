#ifndef TUTORIAL_H
#define TUTORIAL_H

#include <QDialog>

namespace Ui {
    class tutorial;
}

class tutorial : public QDialog
{
    Q_OBJECT

public:
    explicit tutorial(QWidget *parent = 0);
    ~tutorial();

private:
    Ui::tutorial *ui;
};

#endif // TUTORIAL_H
