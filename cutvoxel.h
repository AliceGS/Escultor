#ifndef CUTVOXEL_H
#define CUTVOXEL_H
#include "figurageometrica.h"
#include <sculptor.h>

class CutVoxel : public FiguraGeometrica
{
public:
    CutVoxel(int x_, int y_, int z_);
    ~Cutvoxel();
    void draw(Sculptor &t);
};

#endif // CUTVOXEL_H
