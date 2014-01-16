#ifndef FRISBEE_H
#define FRISBEE_H

class Frisbee
{
    public:
        Frisbee();
        void setPos(int[]);
        void setUp(bool);
        void setOwner(int);

        virtual ~Frisbee();
    protected:
    private:
        int owner;
        int posXY[];
        bool up;
};

#endif // FRISBEE_H
