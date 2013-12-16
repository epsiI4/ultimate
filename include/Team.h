#ifndef TEAM_H_INCLUDED
#define TEAM_H_INCLUDED
#include "Player.h"
#include <vector>
#include <string>

class Team
{
    public:
        Team();
        virtual ~Team();
    protected:
    private:
       std::vector<Player> playerList;
       std::string name;
       int score;
};

#endif // TEAM_H_INCLUDED
