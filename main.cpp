#include <iostream>
#include <pthread.h>
#include "include/Team.h"
#include "include/Terrain.h"
#include "include/Frisbee.h"

using namespace std;

void presentationTeam(Team* t)
{
    cout<< t->getName()<<": "<<endl;
    std::vector<Player> playerList = t->getPlayers();
    for (std::vector<Player>::iterator it = playerList.begin(); it != playerList.end(); ++it)
    {
        it->hello();
       // rc=pthread_create(&threads[i],NULL,p->hello,(void *)i);
    }
}

int main()
{
    //Création des équipes
    int nbPlayer = 5;
    Team *t1 = new Team("Les poissons rouges",5);
    presentationTeam(t1);
    Team *t2 = new Team("Chupacabra's",5);
    presentationTeam(t2);

    //Création du terrain
    Terrain *terrain = new Terrain();

    //Création du frisbee
    Frisbee *frisbee = new Frisbee();
    return 0;
}



