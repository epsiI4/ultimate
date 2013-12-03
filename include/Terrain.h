#ifndef TERRAIN_H
#define TERRAIN_H


class Terrain
{
    public:
        Terrain();
        virtual ~Terrain();
    protected:
    private:
        vector<Zone> zones;
};

#endif // TERRAIN_H
