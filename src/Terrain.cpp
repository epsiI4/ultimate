#include "Terrain.h"

Terrain::Terrain()
{

    int x,y;
    int i,j;
    int w,h;
    int wZone,hZone;
    wZone = 50;
    hZone = 30;
    x=0;
    y=0;

    Zone butLeft = new Zone(0,0,20,30);
    zones.insert(butLeft);
    for(i=0,i<3,i++){
        for(y=0,y<3,){
            Zone z = new Zone(x,y,wZone,hZone));
            zones.insert(z);
            x += wZone;
        }
        y += hZone;
    }

    Zone butRight = new Zone(150,0,20,30);
    zones.insert(butRight);
}

Terrain::~Terrain()
{

}
