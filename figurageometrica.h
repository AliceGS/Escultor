#ifndef FIGURAGEOMETRICA_H
#define FIGURAGEOMETRICA_H
#include "sculptor.h"

class FiguraGeometrica
{
protected:
    int radius, rx, ry, rz;
    int x, xcenter, x0, x1;
    int y, ycenter, y0, y1;
    int z, zcenter, z0, z1;
    float r, g, b, a;
public:
    FiguraGeometrica();
    virtual ~FiguraGeometrica();
    virtual void draw(Sculptor &t)=0;
};

#endif // FIGURAGEOMETRICA_H
