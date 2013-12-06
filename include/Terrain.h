#ifndef TERRAIN_H
#define TERRAIN_H
#include <vector>
#include "..\include\Zone.h"
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
