#include "mainwindow.h"
#include <QApplication>
#include <QMenuBar>
#include <QWidget>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    w.setWindowTitle("Escultor Digital 3D - [Em desenvolvimento] - Helio/Jaime");
    return a.exec();
}



