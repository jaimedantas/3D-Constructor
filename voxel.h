#ifndef VOXEL_H
#define VOXEL_H
typedef struct{
    int r,g,b,a;
    bool exists;
    // R,G,B,A : [0,255]
    // A=0 : transparente
    // A=255 : opaco
    // exists: true ou false
} Voxel;
#endif // VOXEL_H
