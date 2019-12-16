#include "polygon.h"

Polygon::Polygon(unsigned int _temp_maxSize)
{
    _maxSize = _temp_maxSize;
    _number_of_points = 0;
    points_ = new Point[_maxSize];
}

Polygon::~Polygon()
{
    std::cout << "destruktor" << std::endl;
    delete[] points_;
}

void Polygon::push(Point point)
{
    if(_number_of_points < _maxSize)
        points_[_number_of_points++] = point;
    else std::cout << "wystapil blad przy dodawniu punktu, sprawdz pamiec" << std::endl;
}

unsigned int Polygon::numberOfPoints() const
{
    return _number_of_points;
}

void Polygon::makeSVGFile(std::string namefile)
{
    std::ofstream File(namefile.c_str());
    File << "<svg xmlns =\"http://www.w3.org/2000/svg\"" << std::endl;
    File << " viewBox=\"0 0 600 600\">"<<std::endl;
    File <<  "<polyline stroke-width=\"6\""<<std::endl;
    File << "stroke=\"#15096e\" fill=\"none\"" <<std::endl;
    File << " points=\"";

    for (int i = 0; i < _number_of_points; i++)
        File << points_[i].return_xCoord()<< "," << points_[i].return_yCoord()<<" ";
    File << points_[0].return_xCoord()<< "," << points_[0].return_yCoord();

    File<<"\">" << std::endl;
    File<<"</polyline>"<<std::endl;
    File << "</svg>" << std::endl;
    File.close();
    std::cout << "stworzono plik svg pomyslnie" << std::endl;
}



