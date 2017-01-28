#include "painel.h"
#include <QPainter>
#include <QPen>
#include <QBrush>
#include <QColor>
#include <QMouseEvent>

Painel::Painel(QWidget *parent) :
    QWidget(parent)
{
  nx = ny = 10;
}

void Painel::paintEvent(QPaintEvent *)
{
    QPainter painter(this);
    QPen pen;
    QBrush brush;
    float dx, dy;
    dx = (float) width()/nx;
    dy = (float) height()/ny;
    painter.setRenderHint(QPainter::Antialiasing);
    pen.setWidth(1);
    pen.setColor(QColor(0,0,0));
    brush.setStyle(Qt::SolidPattern);
    brush.setColor(QColor(255,255,255));
    painter.setPen(pen);
    painter.setBrush(brush);
    QRectF rectangle(0,0,width(),height());
    //pen.setColor(QColor(255,0,0));
    painter.drawRect(rectangle);
    //brush.setColor(QColor(0,0,0));
    for(int i=0;i<nx;i++){
    painter.drawLine(i*dx,0,i*dx,height());
    }
    for(int i=0;i<ny;i++){
        painter.drawLine(0,i*dy,width(),i*dy);
    }
    for (int i=0; i<nx;i++){
            for (int j=0; j<ny;j++){
                if(m[i][j].exists == true){
                    brush.setColor(QColor(m[i][j].r,m[i][j].g,m[i][j].b,255));
                    painter.setBrush(brush);
                    painter.drawEllipse(i*dx,j*dy,dx,dy);
                }
            }
        }

}

void Painel::loadMatrix(vector< vector<Voxel> > _m)
{
    m = _m;
    ny = m.size();
    nx = m[0].size();
    repaint();
}

void Painel::mousePressEvent(QMouseEvent *e)
{
    int x, y;
    x = e->pos().x()*nx/width();
    y = e->pos().y()*ny/height();
    emit click(x,y);
    /*if(m[y][x].exists == false){
       m[y][x].exists=true;}
       else{
           m[y][x].exists=false;
       }
       repaint();*/
}

