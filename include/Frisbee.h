#ifndef FRISBEE_H
#define FRISBEE_H

class Frisbee
{
    public:
        Frisbee();
        void setPos(int,int);
        void setUp(bool);
        void setOwner(int);
        int* getPos();//methode temporaire de debug
        int  getOwner();//methode temporaire de debug
        virtual ~Frisbee();
    protected:
    private:
        int owner;
        int posXY[2];

        bool up;
};

#endif // FRISBEE_H
