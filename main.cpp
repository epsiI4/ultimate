#include <iostream>
#include <pthread.h>
#include "include/Team.h"
#include "include/Terrain.h"
#include "include/Frisbee.h"
#include "include/Player.h"
#include <windows.h>
#include <gl/gl.h>
using namespace std;

static std::vector<Player*> playerList;
static int nbPlayerTeam = 5;
static int teamOwner = 0;
static int team1Goal = 1;
static int team2Goal = 0;

int main()
{
    //Création du terrain
    Terrain *terrain = new Terrain();

    //Création des joueurs répartient en 2 équipes

    int i;
    //équipe 1
    for(i=0 ; i<nbPlayerTeam ; i++){
        Player *player = new Player(i,1);
        playerList.push_back(player);
    }
    //équipe 2
    for(i=0 ; i<nbPlayerTeam ; i++){
        Player *player = new Player(i+5,2);
        playerList.push_back(player);
    }

    //placement des joueurs
    //initPlayers(*t1,*t2);
    //presentationTeam(t1);
    //presentationTeam(t2);
    int randX;
    int randY;
    int Xtab[10] = {90,80,80,40,40,100,130,130,150,150};
    int Ytab[10] = {45,30,60,10,80,45,30,60,10,80};
    for(i=0 ; i<playerList.size() ; i++){
        //randX = rand()%100 + 1;//terrain->getWidth()-20 + 20; //20 pour ne pas placer le joueur dans les buts
        //randY = rand()%100 + 1;//terrain->getHeight();
        Player* p = playerList[i];
        p->setPos(Xtab[i],Ytab[i]);
        p->hello();
    }


    //Création du frisbee
    Frisbee* frisbee = new Frisbee();
    int idPlayer = rand() % 10;
    Player* p = playerList[idPlayer];
    frisbee->setOwner(idPlayer);
    int* xy = p->getPos();
    frisbee->setPos(xy[0],xy[1]);
    //initialisation de la variable globale de possession du frisbee
    teamOwner = p->getTeam();
    int* posF = frisbee->getPos();
    cout << endl << "le frisbee : " << frisbee->getOwner()<<" x:" << posF[0] << " y:" << posF[1] << endl;



    return 0;
}


