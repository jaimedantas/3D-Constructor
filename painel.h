#ifndef PAINEL_H
#define PAINEL_H
#include "voxel.h"
#include <vector>
#include <QWidget>

using namespace std;

class Painel : public QWidget
{
    Q_OBJECT
private:
    int nx, ny;
    vector< vector<Voxel> > m;
public:
    explicit Painel(QWidget *parent = 0);
    
signals:
    void click(int,int);
    
public slots:
    void paintEvent(QPaintEvent *);
    void loadMatrix(vector< vector<Voxel> >);
    void mousePressEvent(QMouseEvent *e);
};

#endif // PAINEL_H
