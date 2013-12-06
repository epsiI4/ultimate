#ifndef PLAYER_H
#define PLAYER_H


class Player
{
    public:
        Player();
        virtual ~Player();
        void passe();
        void getBall();
        // void receive();
    protected:
    private:
        // int team
        float posxy[2];
        float speed;
        // reception
        // float strength;

};

#endif // PLAYER_H
