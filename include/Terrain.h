#ifndef TERRAIN_H
#define TERRAIN_H
#include "..\include\Zone.h"
#define nbZone 11
#include <vector>

class Terrain
{
    public:
        Terrain();
        virtual ~Terrain();
    protected:
    private:

        std::vector<Zone> zones;
};

#endif // TERRAIN_H
