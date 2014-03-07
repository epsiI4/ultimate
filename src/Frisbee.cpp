#include "../include/frisbee.h"

Frisbee::Frisbee()
{
    posXY[0]=95;
    posXY[1]=45;
}

Frisbee::~Frisbee()
{
    //dtor
}

int* Frisbee::getPos()
{
    return posXY;
}

int Frisbee::getOwner()
{
    return owner;
}

void Frisbee::setOwner(int idPlayer){
    owner = idPlayer;
}

void Frisbee::setPos(int x,int y){
    posXY[0] = x;
    posXY[1] = y;
}
