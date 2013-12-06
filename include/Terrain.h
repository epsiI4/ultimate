#ifndef TERRAIN_H
#define TERRAIN_H
#include "..\include\Zone.h"
#define nbZone 11

class Terrain
{
    public:
        Terrain();
        virtual ~Terrain();
    protected:
    private:

        Zone zones[nbZone];
};

#endif // TERRAIN_H
