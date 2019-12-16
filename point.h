#ifndef POINT_H
#define POINT_H

#include <iostream>

class Point
{
public:
    Point();
    Point(float, float);
    float return_xCoord();
    float return_yCoord();
    void set_xCoord(float);
    void set_yCoord(float);

private:
    float _xCoord;
    float _yCoord;
};

#endif // POINT_H
