#include "Point.h"
#include <iostream>
#include<cmath>
Point::Point(double x, double y):x(x),y(y)
{
}

void Point::afficher() const
{
    std::cout << "X :" << this->x << " Y :" << this->y << std::endl;
}

void Point::translate(float dx, float dy)
{
    this->x += dx;
    this->y += dy;
}

bool Point::operator==(const Point& P) const
{
    return this->x == P.x && this->y == P.y;
}


double Point::distance(const Point& P) const
{
    return sqrt(pow(this->x - P.x,2) + pow(this->y - P.y, 2)) ;
}
