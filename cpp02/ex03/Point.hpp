


#ifndef POINT_HPP
#define POINT_HPP

#include <iostream>
#include "Fixed.hpp"

class Point
{

private:
    Fixed const _x;
    Fixed const _y;
public:
    Point();
    ~Point();

    Fixed getX(void) const;
    Fixed getY(void) const;
    Point(const float x, const float y);
    Point(const Point& copyPoint);
    Point& operator=(const Point& point);

    static Fixed area(const Point& a, const Point& b, const Point& c);
};

bool bsp( Point const a, Point const b, Point const c, Point const p);

#endif