#include "putbox.h"

PutBox::PutBox(int x_0, int x_1, int y_0, int y_1, int z_0, int z_1, float r_, float g_, float b_, float a_)
{
    x0 = x_0;
    x1 = x_1;
    y0 = y_0;
    y1 = y_1;
    z0 = z_0;
    z1 = z_1;
    r = r_;
    g = g_;
    b = b_;
    a = a_;
}

void PutBox::draw(Sculptor &t){
    t.setColor(r, g, b, a);
    t.putBox(x0, x1, y0, y1, z0, z1);
}
