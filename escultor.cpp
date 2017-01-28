#include "escultor.h"
#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

Escultor::Escultor(int _nx, int _ny, int _nz)
{
    nx=_nx;  ny=_ny; nz=_nz;
    lado=0.45;
    r=g=b=a=255;
    v=new Voxel**[nx];
    for(x=0; x<nx; x++){
        v[x]=new Voxel*[ny];
        for(y=0;y<ny;y++){
            v[x][y]=new Voxel[nz];
        }
    }
    for(x=0; x<nx; x++){
        for(y=0; y<ny; y++){
            for(z=0; z<nz; z++){
                v[x][y][z].r=r;
                v[x][y][z].g=g;
                v[x][y][z].b=b;
                v[x][y][z].a=a;
                v[x][y][z].exists=false;
            }
        }

    }

}
Escultor::~Escultor()
{
    for (x=0; x<nx; x++){
        for(y=0;y<ny;y++){
            delete [] v[x][y];
        }
    delete [] v[x];
    }
    delete [] v;
}

void Escultor::botaCaixa(int x0, int x1, int y0, int y1, int z0, int z1)
{

    if (x0<0){
        x0=0;
    }
    if(x1>nx-1){
        x1=nx-1;
    }
    if(y0<0){
        y0=0;
    }
    if(y1>ny-1){
        y1=ny-1;
    }
    if(z0<0){
        z0=0;
       }
    if(z1>nz-1){
        z1=nz-1;
    }
    for(x=x0; x<=x1; x++){
        for(y=y0; y<=y1; y++){
            for(z=z0; z<=z1; z++){
                v[x][y][z].r=r;
                v[x][y][z].g=g;
                v[x][y][z].b=b;
                v[x][y][z].a=a;
                v[x][y][z].exists=true;
            }
        }

    }
}

void Escultor::botaElipse(float x0, float y0, float z0,float rx, float ry, float rz)
{
    for(x=0; x<nx; x++){
        for(y=0; y<ny; y++){
            for(z=0; z<nz; z++){
                if(((x-x0)*(x-x0))/(rx*rx)+(((y-y0)*(y-y0))/(ry*ry))+((z-z0)*(z-z0))/(rz*rz)<=1){
                v[x][y][z].r=r;
                v[x][y][z].g=g;
                v[x][y][z].b=b;
                v[x][y][z].a=a;
                v[x][y][z].exists=true;
            }
        }

    }
}
}
void Escultor::botaEsfera(int x0, int y0, int z0, int rr)
{
    for(x=0; x<nx; x++){
        for(y=0; y<ny; y++){
            for(z=0; z<nz; z++){
                if(((x-x0)*(x-x0)+(y-y0)*(y-y0)+(z-z0)*(z-z0))<=rr*rr){
                    v[x][y][z].r=r;
                    v[x][y][z].g=g;
                    v[x][y][z].b=b;
                    v[x][y][z].a=a;
                    v[x][y][z].exists=true;
                }
            }

}
    }
}

void Escultor::tiraCaixa(int x0, int x1, int y0, int y1, int z0, int z1)
{
    if (x0<0){
        x0=0;
    }
    if(x1>nx-1){
        x1=nx-1;
    }
    if(y0<0){
        y0=0;
    }
    if(y1>ny-1){
        y1=ny-1;
    }
    if(z0<0){
        z0=0;
       }
    if(z1>nz-1){
        z1=nz-1;
    }
    for( x = x0 ; x <=x1 ; x++ ){
        for( y = y0 ; y <=y1 ; y++ ){
            for( z = z0; z <= z1; z++){
                v[x][y][z].exists = false;
            }
        }
    }
}

void Escultor::tiraElipse(int x0, int y0, int z0, int rx, int ry, int rz)
{
    for(x=0; x<nx; x++){
        for(y=0; y<ny; y++){
            for(z=0; z<nz; z++){
                if(((x-x0)*(x-x0))/(rx*rx)+(((y-y0)*(y-y0))/(ry*ry))+((z-z0)*(z-z0))/(rz*rz)<=1){
                v[x][y][z].r=r;
                v[x][y][z].g=g;
                v[x][y][z].b=b;
                v[x][y][z].a=a;
                v[x][y][z].exists=false;
            }
        }

    }
}

}

void Escultor::tiraEsfera(int x0, int y0, int z0, int rr)
{
    for(x=0; x<nx; x++){
        for(y=0; y<ny; y++){
            for(z=0; z<nz; z++){
                if(((x-x0)*(x-x0)+(y-y0)*(y-y0)+(z-z0)*(z-z0))<=rr*rr){
                    v[x][y][z].r=r;
                    v[x][y][z].g=g;
                    v[x][y][z].b=b;
                    v[x][y][z].a=a;
                    v[x][y][z].exists=false;
                }
            }

}
    }

}

void Escultor::tiraVoxel(int x0, int y0, int z0)
{
    v[x0][y0][z0].exists=false;
}

void Escultor::gravaOFF(string nome)
{
    ofstream f;
    int nvoxels=0;
    int ivoxels;
    nome = nome + string(".off");
    f.open(nome.c_str());
    f <<"OFF"<<endl;
    /*
    nome=nome +(".off");
//    f.open("saida.off");
    f.open(nome.c_str());*/

    //verifica quantos voxels estao ativados
    for(x=0; x<nx; x++){
        for(y=0; y<ny; y++){
            for(z=0; z<nz; z++){
                 if(v[x][y][z].exists==true){
                     nvoxels++;
                }

            }
        }

    }

    f<<nvoxels*8<<" "<<nvoxels*6<<" 0\n";
    for(x=0; x<nx; x++){
        for(y=0; y<ny; y++){
            for(z=0; z<nz; z++){
                if(v[x][y][z].exists==true){

                    f<<x-lado<<" "<<y+lado<<" "<<z-lado<<"\n";
                    f<<x-lado<<" "<<y-lado<<" "<<z-lado<<"\n";
                    f<<x+lado<<" "<<y-lado<<" "<<z-lado<<"\n";
                    f<<x+lado<<" "<<y+lado<<" "<<z-lado<<"\n";
                    f<<x-lado<<" "<<y+lado<<" "<<z+lado<<"\n";
                    f<<x-lado<<" "<<y-lado<<" "<<z+lado<<"\n";
                    f<<x+lado<<" "<<y-lado<<" "<<z+lado<<"\n";
                    f<<x+lado<<" "<<y+lado<<" "<<z+lado<<"\n";

                }

            }
        }

    }
    ivoxels = 0;
    for (x=0; x<nx; x++)
    {
        for (y=0; y<ny; y++)
        {
            for (z=0; z<nz; z++)
            {
                if(v[x][y][z].exists == true)
                {

    f<<4<<" "<<0+ivoxels <<" "<<3+ivoxels<<" "<<2+ivoxels<<" "<<1+ivoxels<<
       " "<<v[x][y][z].r<<" "<<v[x][y][z].g<<" "<<v[x][y][z].b<<" "<<v[x][y][z].a<<endl;
    f<<4<<" "<<4+ivoxels<<" "<<5+ivoxels<<" "<<6+ivoxels<<" "<<7+ivoxels<<
       " "<<v[x][y][z].r<<" "<<v[x][y][z].g<<" "<<v[x][y][z].b<<" "<<v[x][y][z].a<<endl;
    f<<4<<" "<<0+ivoxels<<" "<<1+ivoxels<<" "<<5+ivoxels<<" "<<4+ivoxels<<
       " "<<v[x][y][z].r<<" "<<v[x][y][z].g<<" "<<v[x][y][z].b<<" "<<v[x][y][z].a<<endl;
    f<<4<<" "<<0+ivoxels<<" "<<4+ivoxels<<" "<<7+ivoxels<<" "<<3+ivoxels<<
       " "<<v[x][y][z].r<<" "<<v[x][y][z].g<<" "<<v[x][y][z].b<<" "<<v[x][y][z].a<<endl;
    f<<4<<" "<<7+ivoxels<<" "<<3+ivoxels<<" "<<2+ivoxels<<" "<<6+ivoxels<<
       " "<<v[x][y][z].r<<" "<<v[x][y][z].g<<" "<<v[x][y][z].b<<" "<<v[x][y][z].a<<endl;
    f<<4<<" "<<1+ivoxels<<" "<<2+ivoxels<<" "<<6+ivoxels<<" "<<5+ivoxels<<
       " "<<v[x][y][z].r<<" "<<v[x][y][z].g<<" "<<v[x][y][z].b<<" "<<v[x][y][z].a<<endl;
    ivoxels=ivoxels+8;
                }
            }
        }
    }



    f.close();

}

void Escultor::limpaVoxels()
{
    vector<int> coords;
    for (x=1; x<nx-1; x++)
    {
        for (y=1; y<ny-1; y++)
        {
            for (z=1; z<nz-1; z++)
            {
                if(v[x+1][y][z].exists == true&&
                   v[x-1][y][z].exists == true&&
                   v[x][y+1][z].exists == true&&
                   v[x][y-1][z].exists == true&&
                   v[x][y][z+1].exists == true&&
                   v[x][y][z-1].exists == true )
                {
    coords.push_back(x);
    coords.push_back(y);
    coords.push_back(z);
                }
            }
        }
    }
    for(i=0;i<coords.size();i=i+3){
        x=coords[i];
        y=coords[i+1];
        z=coords[i+2];
        tiraVoxel(x,y,z);
    }
}

void Escultor::setDelta(float _delta)
{
     lado=(1-_delta)/2;

}
void Escultor::setColor(int _r,int _g,int _b,int _a){
    r=_r;g=_g;b=_b;a=_a;
}

vector<vector<Voxel> > Escultor::getPlano(int i, int plano)
{
    vector< vector<Voxel> > retorno;
        vector<Voxel> linha;
        if(plano == XY){
            linha.resize(ny);
            for(x=0; x<nx; x++){
                for(y=0; y<ny; y++){
                    linha[y].r = v[x][y][i].r;
                    linha[y].g = v[x][y][i].g;
                    linha[y].b = v[x][y][i].b;
                    linha[y].a = v[x][y][i].a;
                    linha[y].exists = v[x][y][i].exists;
                }
                retorno.push_back(linha);
            }
        }
        else if(plano == YZ){
            linha.resize(nz);
            for(y=0; y<ny; y++){
                for(z=0; z<nz; z++){
                    linha[z].r = v[i][y][z].r;
                    linha[z].g = v[i][y][z].g;
                    linha[z].b = v[i][y][z].b;
                    linha[z].a = v[i][y][z].a;
                    linha[z].exists = v[i][y][z].exists;
                }
                retorno.push_back(linha);
            }
        }
        else{
            linha.resize(nx);
            for(z=0; z<nz; z++){
                for(x=0; x<nx; x++){
                    linha[x].r = v[x][i][z].r;
                    linha[x].g = v[x][i][z].g;
                    linha[x].b = v[x][i][z].b;
                    linha[x].a = v[x][i][z].a;
                    linha[x].exists = v[x][i][z].exists;
                }
                retorno.push_back(linha);
            }
        }
        return retorno;
}
