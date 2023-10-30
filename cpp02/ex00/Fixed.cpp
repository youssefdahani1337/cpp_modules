/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yodahani <yodahani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 16:04:36 by yodahani          #+#    #+#             */
/*   Updated: 2023/10/29 11:40:44 by yodahani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::_fractionNum = 8;

Fixed::Fixed(){}

Fixed::~Fixed(){}

Fixed::Fixed(const Fixed& fixed)
{
    this->_fixedPoint = fixed._fractionNum;
}

Fixed& Fixed::operator=(Fixed fixed)
{
    this->_fixedPoint = fixed._fractionNum;
}
