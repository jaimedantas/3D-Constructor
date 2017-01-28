#ifndef CORES_H
#define CORES_H
#include "voxel.h"
#include <vector>
#include "escultor.h"
#include <QWidget>

using namespace std;


class Cores : public QWidget
{
    Q_OBJECT
private:
    int nx, ny,verm,verd,azul,transparencia;
    vector< vector<Voxel> > m;
public:
    explicit Cores (QWidget *parent = 0);

signals:

public slots:
    void paintEvent(QPaintEvent *);
    void loadMatrix(vector< vector<Voxel> >);
        void recebe_verm(int _verm);
        void recebe_verd(int _verd);
        void recebe_azul(int _azul);
        void recebe_transparencia(int _transparencia);

    //void loadMatrix(vector< vector<Voxel> >);
};

#endif // PAINEL_H
