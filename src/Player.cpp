#include "../include/Player.h"
#include <iostream>
using namespace std;

Player::Player(int i)
{
    id=i;
    //ctor
}

Player::~Player()
{
    //dtor
}

void Player::hello()
{
    cout << "Bonjour je suis le joueur " << id << endl;
}

void passe()
{

}

void getBall()
{

}
