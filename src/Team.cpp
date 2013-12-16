#include "Team.h"

Team::Team()
{
    int i;
    for(i=0;i<playerList.size();i++){
        Player player = new Player(); //on ajoute toujours le même pour l'instant
        playerList.push_back(player);
    }


}

Team::~Team()
{
    //dtor
}
