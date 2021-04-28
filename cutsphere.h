#ifndef CUTSPHERE_H
#define CUTSPHERE_H
#include "figura_geometrica.h"
#include <sculptor.h>

class CutSphere : public FiguraGeometrica
{
public:
    CutSphere(int xcenter_, int ycenter_, int zcenter_, int radius_);

    void draw(Sculptor &t);
};

#endif // CUTSPHERE_H
