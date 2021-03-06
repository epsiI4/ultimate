#include "..\include\Terrain.h"
#include "..\include\Zone.h"
#include "..\include\But.h"
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
    x=20;
    y=0;

    But *butLeft = new But(0,0,20,90);
    zones.push_back(*butLeft);
    for(i;i<3;i++){
        for(j;j<3;j++){
            Zone *z = new Zone(x,y,wZone,hZone);
            zones.push_back(*z);
            x += wZone;
        }
        y += hZone;
    }

    But *butRight = new But(170,0,20,90);
    zones.push_back(*butRight);
}

Terrain::~Terrain()
{

}

int Terrain::getHeight(){
    int height;
    int i;
    Zone *z;
    for(i=0 ; i<zones.size() ; i++){
        *z = zones[i];
        height = height + z->getHeight();
    }
    return height;
}

int Terrain::getWidth(){
    int width;
    int i;
    Zone *z;
    for(i=0 ; i<zones.size() ; i++){
        *z = zones[i];
        width = width + z->getWidth();
    }
    return width;
}
