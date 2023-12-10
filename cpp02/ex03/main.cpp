/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yodahani <yodahani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 17:31:27 by yodahani          #+#    #+#             */
/*   Updated: 2023/11/14 21:15:06 by yodahani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int main( void )
{
    Point a(0, 0);
    Point b(20, 0);
    Point c(10, 10);
    Point p(12,0);
    
    bool inside;

    inside = bsp(a, b, c, p);
    if (inside)
        std::cout << "The point is inside the triangle" << std::endl;
    else
        std::cout << "The point is outside the triangle" << std::endl;
    return 0;
}