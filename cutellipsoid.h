#ifndef CUTELLIPSOID_H
#define CUTELLIPSOID_H
#include "figura_geometrica.h"
#include <sculptor.h>

class CutEllipsoid : public FiguraGeometrica
{
public:
    CutEllipsoid(int xcenter_, int ycenter_, int zcenter_, int rx_, int ry_, int rz_);

    void draw(Sculptor &t);
};

#endif // CUTELLIPSOID_H
