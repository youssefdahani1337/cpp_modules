/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yodahani <yodahani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 21:16:06 by yodahani          #+#    #+#             */
/*   Updated: 2023/11/14 21:16:07 by yodahani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

bool bsp( Point const a, Point const b, Point const c, Point const p)
{
    Fixed area = Point::area(a, b, c);

    Fixed areaP1 = Point::area(p, a, b);
    Fixed areaP2 = Point::area(p, b, c);
    Fixed areaP3 = Point::area(p, a, c);

    if (!areaP1 || !areaP2 || !areaP3)
        return (false);
    return (area == (areaP1 + areaP2 + areaP3));
}
