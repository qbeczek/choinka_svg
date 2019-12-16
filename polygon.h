#ifndef POLYGON_H
#define POLYGON_H

#include <iostream>
#include <string>
#include <fstream>
#include "point.h"

class Polygon
        :public Point
{
public:
    Polygon(unsigned int);
    ~Polygon();

    void push(Point);
    void makeSVGFile(std::string);


    unsigned int numberOfPoints() const;

private:
    unsigned int _maxSize;
    Point* points_ = nullptr;
    unsigned int _number_of_points = 0;

};

#endif // POLYGON_H
