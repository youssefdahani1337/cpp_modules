/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yodahani <yodahani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 23:04:36 by yodahani          #+#    #+#             */
/*   Updated: 2023/10/23 15:50:30 by yodahani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "HumanB.hpp"

HumanB::HumanB(){}
HumanB::HumanB(std::string name):name(name){}

void    HumanB::attack(void)
{
    std::cout << this->name
     << " attacks with their " << weapon->getType() << std::endl; 
}

void    HumanB::setWeapon(Weapon& weapon)
{
    this->weapon = &weapon;
}