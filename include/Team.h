#ifndef TEAM_H_INCLUDED
#define TEAM_H_INCLUDED

class Team
{
    public:
        Team();
        virtual ~Team();
    protected:
    private:
       std::vector<Player> playerList;
       std::String name;
       int score;
};

#endif // TEAM_H_INCLUDED
