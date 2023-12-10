/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yodahani <yodahani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 17:14:20 by yodahani          #+#    #+#             */
/*   Updated: 2023/11/14 18:17:27 by yodahani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"


Point::Point():_x(0), _y(0){}

Point::~Point(){}

Fixed Point::getX(void) const { return (this->_x); }

Fixed Point::getY(void) const { return (this->_y);}

Point::Point(const Point& copyPoint) :_x(copyPoint.getX()),_y(copyPoint.getY()) {}

Point& Point::operator=(const Point& copyPoint)
{
    (Fixed) this->_x = copyPoint.getX();
    (Fixed) this->_y = copyPoint.getY();
    return (*this);
}

Point::Point(const float x, const float y) :_x(x), _y(y){}

Fixed Point::area(const Point& a, const Point& b, const Point& c)
{
    Fixed d1;
    Fixed d2;
    Fixed d3;

    d1 = (a.getX()*(b.getY() - c.getY()));
    d2 = (b.getX()*(c.getY() - a.getY()));
    d3 = (c.getX()*(a.getY() - b.getY()));
    
    return (Fixed::abs((d1 + d2 + d3) / Fixed(2)));
}
