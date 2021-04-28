#include "putvoxel.h"
#include <sculptor.h>

PutVoxel::PutVoxel()
{
    x = x_;
    y = y_;
    z = z_;
    r = r_;
    g = g_;
    b = b_;
    a = a_;
}

void PutVoxel::draw(Sculptor &t)
{
    t.setColor(r,g,b,a);
    t.putVoxel(x,y,z);

}
