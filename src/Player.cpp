#include "../include/Player.h"
#include <cmath>
#include <iostream>
using namespace std;

Player::Player(int i,int idTeam)
{
    id=i;
    team=team;
    pReception = 0.9;
}

Player::~Player()
{
    //dtor
}

void Player::hello()
{
    cout << "Bonjour je suis le joueur " << id << " je suis en position x:"<< posXY[0] << " y:" << posXY[1] <<endl;
}

void Player::passe()
{

}

void Player::getBall()
{

}

void Player::setPos(int x,int y)
{
    posXY[0] = x;
    posXY[1] = y;
}

int* Player::getPos()
{
    return posXY;
}

int Player::getTeam()
{
    return team;
}

void Player::play(vector<Player*> playerList,Frisbee* f)
{
    int owner = f->getOwner();
    int ownerTeam;

    if(owner<5){
        ownerTeam = 1;
    }else{
        ownerTeam = 2;
    }

    if(this->team == ownerTeam){
        //Attaquer
        if(this->id = owner){
            //cherche à faire une passe
        }else{
            //cherche à avancer vers le but advairse
        }
    }else{
        //Defendre
        this->defend(playerList);
    }

}

void Player::attack()
{

}

void Player::defend(vector<Player*> playerList)
{
    //chercher le joueur adversaire le plus proche.
    int i;
    switch(team){
    case 1: //parcourir l'équipe 2
            int minX = 9999;
            int minY = 9999;
            int id;
            int difX,difY;
            for(i=0; i<5; i++){ // i<nbPlayerTeam
                //comparer la position
                Player* p = playerList[i];
                int* posXY = p->getPos();
//il faut chercher le nombre de pixel qu'il y a entre le joueurs et les autres
/*
                difX = abs(this->posXY[0] - posXY[0]) ;
                difY = abs(this->posXY[1] - posXY[1]);

                if(difX < minX){minX = difX;}
                if(difY < minY){minY = difY;}
*/
            }
    break;
    }
    // se deplacer vers de 30px max.
    // évaluer la distance entre lui et le joueur ciblé
    // en fonction de cette distance set la variable pReception en la diminuant de 0.7, 0.4 ou 0.15 .
}
//void Player::goToGoal(int xBut){

//}
