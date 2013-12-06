#include "..\include\Terrain.h"
#include "..\include\Zone.h"
#include "But.h"
#include <vector>
Terrain::Terrain()
{

    int x,y;
    int i,j;
    int w,h;
    int wZone,hZone;
    wZone = 50;
    hZone = 30;
    i=0;
    y=0;
    x=0;
    y=0;

    But *butLeft = new But(0,0,20,30);
    zones.push_back(*butLeft);
    for(i;i<3;i++){
        for(j;j<3;j++){
            Zone *z = new Zone(x,y,wZone,hZone);
            zones.push_back(*z);
            x += wZone;
        }
        y += hZone;
    }

    But *butRight = new But(150,0,20,30);
    zones.push_back(*butRight);
}

Terrain::~Terrain()
{

}
