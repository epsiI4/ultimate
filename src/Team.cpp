#include "../include/Team.h"

Team::Team(std::string n,int nb)
{
    //name = n;
    //int i;
    //for(i=0;i<nb;i++){
    //    Player *player = new Player(i); //on ajoute toujours le même pour l'instant
    //    playerList.push_back(player);
    //}
}

Team::~Team()
{
    //dtor
}

std::string Team::getName()
{
    return name;
}

std::vector<Player*> Team::getPlayers()
{
    return playerList;
}
