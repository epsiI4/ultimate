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
        int getWidth();
        int getHeight();
    protected:
    private:

        std::vector<Zone> zones;
};

#endif // TERRAIN_H
