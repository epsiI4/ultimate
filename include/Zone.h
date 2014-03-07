#ifndef ZONE_H
#define ZONE_H


class Zone
{
    public:
        Zone();
        Zone(int,int,int,int);
        int getPosXY();
        virtual ~Zone();
        int getWidth();
        int getHeight();
    protected:
    private:
        int id;
        int width;
        int height;
        int posXY[2];
};

#endif // ZONE_H
