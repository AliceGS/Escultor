#ifndef PUTBOX_H
#define PUTBOX_H
#include "figurageometrica.h"
#include <sculptor.h>
class PutBox : public FiguraGeometrica
{
public:
    PutBox(int x0_, int x1_, int y0_, int y1_, int z0_, int z1_, float r_, float g_, float b_, float a_);
    void draw(Sculptor &t);
};

#endif // PUTBOX_H
