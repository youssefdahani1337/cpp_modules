/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yodahani <yodahani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 22:57:02 by yodahani          #+#    #+#             */
/*   Updated: 2023/10/20 16:23:37 by yodahani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _HUMANA_HPP
#define _HUMANA_HPP

#include "Weapon.hpp"

class HumanA
{
public:
    std::string name;
    Weapon     *weapon;
public:
    HumanA(std::string name , Weapon& weapon);
    void    attack(void);
    
    
};

#endif