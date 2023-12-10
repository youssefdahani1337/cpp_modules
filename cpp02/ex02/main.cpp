/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yodahani <yodahani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 17:31:27 by yodahani          #+#    #+#             */
/*   Updated: 2023/11/13 17:00:13 by yodahani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"

int main( void )
{
    Fixed a;
    Fixed const b( Fixed( 5 ) / Fixed( 2 ) );

    Fixed  c( Fixed( 10.5f ) * Fixed( 2 ) );

    std::cout << a << std::endl;
    std::cout << ++a << std::endl ;
    std::cout << a << std::endl << std::endl;

    
    std::cout << a ++ << std::endl;
    std::cout << a << std::endl << std::endl;
    
    std::cout << b << std::endl;
    std::cout << Fixed::max( a, b ) << std::endl << std::endl;    
    std::cout << c << std::endl;
    std::cout << Fixed::max( c, b ) << std::endl;
    return 0;
}