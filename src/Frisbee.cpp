#include "../include/frisbee.h"

Frisbee::Frisbee(bool u,int num,int x,int y)
{
   posXY[0] = x;
   posXY[1] = y;
   owner = num;
   up = u;
}

Frisbee::~Frisbee()
{
    //dtor
}
