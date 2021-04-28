#ifndef CUTBOX_H
#define CUTBOX_H
#include <sculptor.h>
#include "figurageometrica.h"

class CutBox : public FiguraGeometrica
{
public:
    CutBox(int x0_, int x1_, int y0_, int y1_, int z0_, int z1_);
    void draw(Sculptor &t);
};

#endif // CUTBOX_H
