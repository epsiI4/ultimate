#include "frisbee.h"

Frisbee::Frisbee(status s, int num,int x,int y)
{
   posXY[0] = x;
   posXY[1] = y;
   onwer = num;
}

Frisbee::~Frisbee()
{
    //dtor
}
