#include "point.h"

Point::Point()
{
    _xCoord = 0.0;
    _yCoord = 0.0;
}

Point::Point(float _xx, float _yy)
{
    _xCoord = _xx;
    _yCoord = _yy;
}

float Point::return_xCoord()
{
    return _xCoord;
}

float Point::return_yCoord()
{
    return _yCoord;
}

void Point::set_xCoord(float _temp_xCoord)
{
    _xCoord = _temp_xCoord;
}

void Point::set_yCoord(float _temp_yCoord)
{
    _yCoord = _temp_yCoord;
}

