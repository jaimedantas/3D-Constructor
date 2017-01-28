#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "escultor.h"

namespace Ui {
class MainWindow;
}

enum {BOTACAIXA, TIRACAIXA, BOTAESFERA, TIRAESFERA, BOTAVOXEL, TIRAVOXEL,BOTAELIPSE,TIRAELIPSE};
class MainWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    
private:
    Ui::MainWindow *ui;
    int r, g, b;
    Escultor *e;
    int nx, ny, nz;
    int modoDesenho;
    int r1,r2,r3,z;

public slots:
    void recebeClick(int x, int y);
    void mudaR(int _r);
    void mudaG(int _g);
    void mudaB(int _b);
    void mudaRGB();
    void salvar();
    void mudaPlano(int plano);


private slots:
    void on_actionNovo_Escultor_triggered();
    void on_actionSair_triggered();
    void on_actionSalvar_triggered();
    void on_actionAjuda_triggered();
    void on_actionSobre_triggered();
};

#endif // MAINWINDOW_H
