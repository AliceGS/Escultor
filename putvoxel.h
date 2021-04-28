#ifndef PUTVOXEL_H
#define PUTVOXEL_H
#include "figurageometrica.h"
#include <sculptor.h>

class PutVoxel : public FiguraGeometrica
{
public:
    PutVoxel(int x_, int y_, int z_, float r_, float g_, float b_, float a_);

    void draw(Sculptor &t);
};

#endif // PUTVOXEL_H
