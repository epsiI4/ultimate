#ifndef TERRAIN_H
#define TERRAIN_H
#define nbZone 11
#include "Zone.h"


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
