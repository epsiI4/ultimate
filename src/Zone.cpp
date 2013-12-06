#include "..\include\Zone.h"

Zone::Zone(int x,int y,int w, int h)
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
