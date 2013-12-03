#include "Terrain.h"

Terrain::Terrain()
{

    int x,y;
    int i,y;
    int w,h;
    int wZone,hZone;
    wZone = 50;
    hZone = 30;
    x=0;
    y=0;

    Zone butLeft = new Zone(20,30,0,20);
    zones.insert(butLeft);
    for(i=0,i<3,i++){
        for(y=0,y<3,){
            Zone z = new Zone(wZone,hZone,x,y);
            zones.insert(z);
            x += wZone;
        }
        y += hZone;
    }

    Zone butRight = new Zone(20,30,150,30);
    zones.insert(butRight);
}

Terrain::~Terrain()
{

}
