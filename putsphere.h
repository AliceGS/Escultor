#ifndef PUTSPHERE_H
#define PUTSPHERE_H
#include "figura_geometrica.h"
#include <sculptor.h>

class PutSphere : public FiguraGeometrica
{
public:
    PutSphere(int xcenter_, int ycenter_, int zcenter_, int radius_, float r_, float g_, float b_, float a_);

    void draw(Sculptor &t);
};

#endif // PUTSPHERE_H
