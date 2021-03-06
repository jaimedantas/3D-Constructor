#ifndef ESCULTOR_HPP
#define ESCULTOR_HPP
#include <string>
#include <vector>
#include "voxel.h"

using namespace std;

enum {OFF, VECT}; // identifica o tipo de arquivo para salvamento
enum {XY,ZX,YZ}; // identifica o plano a ser recuperado

class Escultor{
private:
  Voxel ***v; // array que armazena o bloco 3d
  float lado; // metade da largura de um cubo
  float delta; // distancia entre os cubos
  int r,g,b,a;
  int nx, ny, nz; // dimensoes do cubo em x,y,z
  int i, x, y, z; // variaveis auxiliares
public:
  // construtor da classe
  Escultor(int _nx=1, int _ny=1, int _nz=1);
  ~Escultor();

  // ativa um paralelepipedo com diagonais opostos
  // (x0, y0, z0) -> (x1, y1, z1)
  void botaCaixa(int x0, int x1, int y0, int y1, int z0, int z1);

  // ativa uma elipse com centro em (x0, y0, z0) e raios rx, ry, rz
  void botaElipse(float x0, float y0, float z0,float rx, float ry, float rz);
  
  // ativa uma esfera com centro em (x0, y0, z0) e raio r
  void botaEsfera(int x0, int y0, int z0, int rr);

  // ativa um voxel em (x0, y0, z0)
  void botaVoxel(int x0, int y0, int z0);

  // desativa um paralelepipedo com diagonais opostos
  // (x0, y0, z0) -> (x1, y1, z1)
  void tiraCaixa(int x0, int x1, int y0, int y1, int z0, int z1);

  // desativa uma elipse com centro em (x0, y0, z0) e raios rx, ry, rz
  void tiraElipse(int x0, int y0, int z0, int rx, int ry, int rz);

  // desativa uma esfera com centro em (x0, y0, z0) e raio r
  void tiraEsfera(int x0, int y0, int z0, int rr);

  // desativa um voxel em (x0, y0, z0)
  void tiraVoxel(int x0, int y0, int z0);

  // grava o modelo criado no arquivo "nome.off" no formato OFF
  // se a funcao for chamada, por exemplo, da forma v.grava("saida",VECT);
  // o arquivo eh gravado no formato vect
  //void grava(string nome, int mode=OFF);

  void gravaOFF(string nome); // grava no formato OFF
 // void gravaVECT(string nome); // grava no formato VECT

  // desativa os voxels totalmente rodeados, pois nao serao vistos
  // no visualizador, alem de consumirem recursos para exibicao
  void limpaVoxels(void);

  // define o espacamento entre os cubos do bloco
  void setDelta(float _delta);

  // define a cor de desenho*/
  void setColor(int _r, int _g, int _b, int _a);

  // recupera uma matriz de voxels referente a posicao fornecida no
  // plano informado
  vector< vector<Voxel> > getPlano(int i, int plano=XY);
};
#endif
