#ifndef PLAYER_H
#define PLAYER_H
#include <vector>
#include "frisbee.h"
class Player
{
    public:
        Player(int,int);
        virtual ~Player();
        void play(std::vector<Player*>,Frisbee*);
        void hello();
        void passe();
        void attack();
        void defend(std::vector<Player*>);
        void getBall();
        void setPos(int,int);
        int* getPos();
        int  getTeam();
        // void receive();
    protected:
    private:
        int id;
        int posXY[2];
        float speed;
        int zone;
        int team;
        float pReception;
        // reception
        // float strength;

};

#endif // PLAYER_H
