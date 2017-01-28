#include "cores.h"
#include <QPainter>
#include <QPen>
#include <QBrush>
#include <QColor>
#include "voxel.h"
#include "escultor.h"

Cores::Cores(QWidget *parent) :
    QWidget(parent)
{
    verm=verd=azul=0;
       transparencia=255;
}
void Cores::paintEvent(QPaintEvent *)
{
    QPainter painter(this);
        QPen pen;
        QBrush brush;
        painter.setRenderHint(QPainter::Antialiasing);
        brush.setStyle(Qt::SolidPattern);
        brush.setColor(QColor(verm,verd,azul,transparencia));
        painter.setPen(pen);
        painter.setBrush(brush);
        painter.drawRect(0,0,width(),height());
}

void Cores::loadMatrix(vector<vector<Voxel> >_m)
{
    m = _m;
      ny = m.size();
      nx = m[0].size();
}

void Cores::recebe_verm(int _verm)
{
    verm=_verm*255/100;
        repaint();
}

void Cores::recebe_verd(int _verd)
{
    verd=_verd*255/100;
       repaint();
}

void Cores::recebe_azul(int _azul)
{
    azul=_azul*255/100;
        repaint();
}

void Cores::recebe_transparencia(int _transparencia)
{
    transparencia=_transparencia;
        repaint();
}



