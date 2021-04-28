#include "cutvoxel.h"

CutVoxel::CutVoxel()
{
    x = x_;
    y = y_;
    z = z_;
}

void CutVoxel::draw(Sculptor &t)
{
    t.cutVoxel(x,y,z);
}
