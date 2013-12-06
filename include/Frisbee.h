#ifndef FRISBEE_H
#define FRISBEE_H


class Frisbee
{
    public:
        Frisbee(status,int,int,int);
        virtual ~Frisbee();
    protected:
    private:
        int num;
        int posXY[];
        enum status{up,down};
};

#endif // FRISBEE_H
