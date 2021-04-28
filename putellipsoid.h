#ifndef PUTELLIPSOID_H
#define PUTELLIPSOID_H
#include <sculptor.h>
#include "figurageometrica.h"

class PutEllipsoid : public FiguraGeometrica
{
public:
    PutEllipsoid(int xcenter_, int ycenter_, int zcenter_, int rx_, int ry_, int rz_, float r_, float g_, float b_, float a_);
    void draw(Sculptor &t);
};

#endif // PUTELLIPSOID_H
