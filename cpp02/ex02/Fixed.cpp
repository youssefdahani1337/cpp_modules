/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yodahani <yodahani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 16:04:36 by yodahani          #+#    #+#             */
/*   Updated: 2023/11/14 15:10:35 by yodahani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::_fractionNum = 8;

Fixed::Fixed():_fixedPoint(0){}
Fixed::~Fixed(){}
Fixed::Fixed(const Fixed& fixed)
{
    this->_fixedPoint = fixed._fixedPoint;
}
Fixed::Fixed(const int integer)
{
    this->_fixedPoint = integer << _fractionNum;
}
Fixed::Fixed(const float floatPoint)
{
    this->_fixedPoint = (int) roundf(floatPoint * (1 << _fractionNum ));
}

Fixed& Fixed::operator=(const Fixed& fixed)
{
    this->_fixedPoint = fixed._fixedPoint;
    return (*this);
}
int Fixed::getRawBits( void ) const
{
    return (this->_fixedPoint);
}
void Fixed::setRawBits( int const raw )
{
    this->_fixedPoint = raw;
}

float   Fixed::toFloat(void) const
{
    return ((float)(_fixedPoint / (float)(1 << _fractionNum )));
}
int     Fixed::toInt(void) const
{
    return (this->_fixedPoint >> _fractionNum);
}

std::ostream&  operator<< (std::ostream& output,const  Fixed& obj)
{
    output << obj.toFloat();
    return (output);
}

        /**comparison operators: */
bool Fixed::operator>(const Fixed& other) const
{
    return (this->_fixedPoint > other._fixedPoint);
}
bool Fixed::operator<(const Fixed& other) const
{
    return (this->_fixedPoint < other._fixedPoint);

}
bool Fixed::operator>=(const Fixed& other) const
{
    return (this->_fixedPoint >= other._fixedPoint);
}
bool Fixed::operator<=(const Fixed& other) const
{
    return (this->_fixedPoint <= other._fixedPoint);
}
bool Fixed::operator==(const Fixed& other) const
{
    return (this->_fixedPoint == other._fixedPoint);
}
bool Fixed::operator!=(const Fixed& other) const
{
    return (this->_fixedPoint != other._fixedPoint);
}

    /*Arithmetic operators */

Fixed Fixed::operator+(const Fixed& other) const
{
    Fixed fix;

    fix._fixedPoint = this->_fixedPoint + other._fixedPoint;
    return (fix);
}
Fixed Fixed::operator-(const Fixed& other) const
{
    Fixed fix;
    
    fix._fixedPoint = this->_fixedPoint - other._fixedPoint;
    return (fix);
}
Fixed Fixed::operator*(const Fixed& other) const
{
    Fixed fix ;

    fix._fixedPoint = ((this->_fixedPoint) * (other._fixedPoint)) / (1 << 8);
    return (fix);
}
Fixed Fixed::operator/(const Fixed& other) const
{
    Fixed fix;

    fix._fixedPoint = ((this->_fixedPoint * (1 << 8) )  / (other._fixedPoint))  ;
    return (fix);
}

    /*Increment and decrement */
Fixed& Fixed::operator++()
{
    ++this->_fixedPoint  ; 
    return (*this);
}
Fixed& Fixed::operator--()
{
    -- this->_fixedPoint;
    return (*this);
}
Fixed Fixed::operator++(int)
{
    Fixed fix(*this);
     this->_fixedPoint ++; 
    return (fix);
}
Fixed Fixed::operator--(int)
{
   Fixed fix(*this);
     this->_fixedPoint --; 
    return (fix);
}

    /*Min Max*/

Fixed& Fixed::min(Fixed& fixOne,  Fixed& fixTwo)
{
    if (fixOne <= fixTwo)
        return (fixOne);
    return (fixTwo);
}
const Fixed& Fixed::min(const Fixed& fixOne, const Fixed& fixTwo)
{
    if (fixOne <= fixTwo)
        return (fixOne);
    return (fixTwo);
}
Fixed& Fixed::max(Fixed& fixOne,  Fixed& fixTwo)
{
    if (fixOne >= fixTwo)
        return (fixOne);
    return (fixTwo);
}
const Fixed& Fixed::max(const Fixed& fixOne, const Fixed& fixTwo)
{
    if (fixOne >= fixTwo)
        return (fixOne);
    return (fixTwo);
}
