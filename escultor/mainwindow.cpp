#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QString>
#include <iostream>
#include <QFileDialog>
#include "sobre.h"
#include <QMessageBox>
#include <QObject>
#include "ajuda.h"
#include "novo.h"

using namespace std;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    nx = ny = nz = 20;
    ui->horizontalSliderPlano_z->setMaximum(nz-1);
    r = g = b = 255;
    e = new Escultor(nx, ny, nz);
    //e->setColor(0,0,0,255);
    //e->botaCaixa(0,3,0,3,0,3);
    ui->widget->loadMatrix(e->getPlano(0));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::recebeClick(int x, int y)
{
    if(ui->Botton_Caixa->isChecked()==true){
        modoDesenho=BOTACAIXA;
    }
    else if (ui->Button_TiraCaixa->isChecked() == true){
        modoDesenho=TIRACAIXA;
    }
    else if (ui->botton_Esfera->isChecked() == true){
        modoDesenho=BOTAESFERA;
    }
    else if (ui->botton_tiraEsfera->isChecked() == true){
        modoDesenho=TIRAESFERA;
    }
    else if (ui->button_Elipse->isChecked() == true){
        modoDesenho=BOTAELIPSE;
    }
    else if (ui->button_tiraElipse->isChecked()==true){
        modoDesenho=TIRAELIPSE;
}


    switch(modoDesenho){
    case BOTACAIXA:
        e->botaCaixa(x-ui->horizontalSlider_x->value()/2,
                     x+ui->horizontalSlider_x->value()/2,
                     y-ui->horizontalSlider_y->value()/2,
                     y+ui->horizontalSlider_y->value()/2,
                     ui->horizontalSliderPlano_z->value()-ui->horizontalSlider_z->value()/2,
                     ui->horizontalSliderPlano_z->value()+ui->horizontalSlider_z->value()/2);
        //ui->label_17->setText(QString().setNum(x));
        //ui->widget->loadMatrix(e->getPlano(0));
        ui->widget->loadMatrix(e->getPlano(ui->horizontalSliderPlano_z->value(),XY));
        break;
    case TIRACAIXA:
        e->tiraCaixa(x-ui->horizontalSlider_x->value()/2,
                     x+ui->horizontalSlider_x->value()/2,
                     y-ui->horizontalSlider_y->value()/2,
                     y+ui->horizontalSlider_y->value()/2,
                     ui->horizontalSliderPlano_z->value()-ui->horizontalSlider_z->value()/2,
                     ui->horizontalSliderPlano_z->value()+ui->horizontalSlider_z->value()/2);
        ui->widget->loadMatrix(e->getPlano(ui->horizontalSliderPlano_z->value(),XY));
        break;
        case BOTAESFERA:
        e->botaEsfera(x,y,ui->horizontalSliderPlano_z->value(),ui->horizontalSliderRaio->value());
        //ui->label_17->setText(QString().setNum(x));
       ui->widget->loadMatrix(e->getPlano(ui->horizontalSliderPlano_z->value(),XY));
        break;
    case TIRAESFERA:
          e->tiraEsfera(x,y,ui->horizontalSliderPlano_z->value(),ui->horizontalSliderRaio->value());
          ui->widget->loadMatrix(e->getPlano(ui->horizontalSliderPlano_z->value(),XY));
          break;
    case BOTAELIPSE:
        e->botaElipse(x,y,ui->horizontalSliderPlano_z->value(),ui->horizontalSlider_RX->value(),
                      ui->horizontalSlider_RY->value(),ui->horizontalSlider_RZ->value());
                ui->widget->loadMatrix(e->getPlano(ui->horizontalSliderPlano_z->value(),XY));
    break;
    case TIRAELIPSE:
        e->tiraElipse(x,y,ui->horizontalSliderPlano_z->value(),ui->horizontalSlider_RX->value(),
                      ui->horizontalSlider_RY->value(),ui->horizontalSlider_RZ->value());
        ui->widget->loadMatrix(e->getPlano(ui->horizontalSliderPlano_z->value(),XY));
        break;

    }



}

void MainWindow::mudaR(int _r)
{
    r = _r*255/100;
  // mudaRGB();
    e->setColor(r,g,b,255);
}

void MainWindow::mudaG(int _g)
{
    g = _g*255/100;
       // mudaRGB();
e->setColor(r,g,b,255);
}

void MainWindow::mudaB(int _b)
{
    b = _b*255/100;
      // mudaRGB();
e->setColor(r,g,b,255);

}

void MainWindow::mudaRGB()
{
    // e->setColor(r,g,b,255);

}

void MainWindow::salvar()
{
       QString s;
       QFileDialog d;
       s=d.getSaveFileName(this);
       e->gravaOFF(s.toStdString());
}



void MainWindow::on_actionSobre_triggered()
{
    Sobre janelaSobre;
    janelaSobre.setModal(true);
    janelaSobre.setWindowTitle("Sobre");
    janelaSobre.exec();
}

void MainWindow::on_actionAjuda_triggered()
{
    Ajuda janelaAjuda;
    janelaAjuda.setModal(true);
    janelaAjuda.setWindowTitle("Ajuda");
    janelaAjuda.exec();
 }

void MainWindow::on_actionSalvar_triggered()
{
    QString s;
       QFileDialog d;
       s=d.getSaveFileName(this);
       e->gravaOFF(s.toStdString());
 }

void MainWindow::on_actionSair_triggered()
{
     QObject::connect(ui->actionSair, SIGNAL(triggered()), this, SLOT(close()));
}

void MainWindow::mudaPlano(int plano)
{
ui->widget->loadMatrix(e->getPlano(ui->horizontalSliderPlano_z->value()));
}



void MainWindow::on_actionNovo_Escultor_triggered()
{
    Novo janelaNovo;
    janelaNovo.setModal(true);
    janelaNovo.setWindowTitle("Novo");
    janelaNovo.exec();
    delete e;
    nx = janelaNovo.PegaNovoX();
    ny = janelaNovo.PegaNovoY();
    nz = janelaNovo.PegaNovoZ();
    e = new Escultor(nx,ny,nz);
    ui->horizontalSliderPlano_z->setMaximum(nz-1);
    ui->widget->loadMatrix(e->getPlano(0));
    ui->horizontalSliderPlano_X->setMaximum(nx-1);
    ui->horizontalSliderPlano_Y->setMaximum(ny-1);

    ui->horizontalSlider_x->setMaximum(nx-1);
    ui->horizontalSlider_y->setMaximum(ny-1);
    ui->horizontalSlider_z->setMaximum(nz-1);

    ui->horizontalSliderRaio->setMaximum(nz-1);

    ui->horizontalSlider_RX->setMaximum(nx-1);
    ui->horizontalSlider_RY->setMaximum(ny-1);
    ui->horizontalSlider_RZ->setMaximum(nz-1);

}
