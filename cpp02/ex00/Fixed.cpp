/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yodahani <yodahani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 16:04:36 by yodahani          #+#    #+#             */
/*   Updated: 2023/11/08 17:35:04 by yodahani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"

const int Fixed::_fractionNum = 8;

Fixed::Fixed():_fixedPoint(0)
{
    std::cout << "Default Constructor called" << std::endl;   
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;    
}

Fixed::Fixed(const Fixed& fixed)
{
    std::cout << "Copy Constructor called" << std::endl;
    this->_fixedPoint = fixed._fixedPoint;
}

Fixed& Fixed::operator=(Fixed fixed)
{
    std::cout << "Copy assignment operator called" << std::endl; 
    this->_fixedPoint = fixed._fixedPoint;
    return (*this);
}

int Fixed::getRawBits( void ) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return (this->_fixedPoint);
}

void Fixed::setRawBits( int const raw )
{
    std::cout << "setRawBits member function called" << std::endl;
    this->_fixedPoint = raw;   
}
