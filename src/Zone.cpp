#include "Zone.h"

Zone::Zone(int w, int h,int x,int y)
{
   width = w;
   height = h;
   posXY[0] = x;
   posXY[1] = y;
}

Zone::~Zone()
{
    //dtor
}

public int[] getPos(){
    return posXY;
}
