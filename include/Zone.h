#ifndef ZONE_H
#define ZONE_H


class Zone
{
    public:
        Zone(int x,int y,int w, int h);
        virtual ~Zone();
    protected:
    private:
        int id;
        int width;
        int height;
        int posXY[];
};

#endif // ZONE_H
