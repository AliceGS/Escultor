#include <iostream>
#include "sculptor.h"
#include "sculptor.cpp"
#include <iostream>
#include <fstream>
#include <string>
#include <math.h>

using namespace std;

int main()
{
    Sculptor draw(120,80,100);
    draw.setColor(1,1,1,1);
    draw.putVoxel(18,81,53);
    draw.cutVoxel(0,0,0);
    draw.setColor(1,0,0,1);
    draw.putSphere(30,30,30,10);
    draw.cutSphere(15,15,15,5);

    draw.writeOFF((char*)"draw.off");


    return 0;
}
