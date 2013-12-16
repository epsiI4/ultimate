#ifndef FRISBEE_H
#define FRISBEE_H

class Frisbee
{
    public:
        Frisbee();
        Frisbee(bool,int,int,int);
        virtual ~Frisbee();
    protected:
    private:
        int owner;
        int posXY[];
        bool up;
};

#endif // FRISBEE_H
