#ifndef PLAYER_H
#define PLAYER_H

class Player
{
    public:
        Player(int);
        virtual ~Player();
        void hello();
        void passe();
        void getBall();
        // void receive();
    protected:
    private:
        int id;
        float posxy[2];
        float speed;
        // reception
        // float strength;

};

#endif // PLAYER_H
