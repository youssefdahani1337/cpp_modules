/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yodahani <yodahani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 23:04:36 by yodahani          #+#    #+#             */
/*   Updated: 2023/10/29 22:29:45 by yodahani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "HumanB.hpp"

HumanB::HumanB(){}
HumanB::HumanB(std::string name):name(name), _weapon(NULL){}

void    HumanB::attack(void)
{
    if (_weapon)
        std::cout << this->name << " attacks with their " << _weapon->getType() << std::endl; 
    else
        std::cout << "No weapon are set" << std::endl;
}

void    HumanB::setWeapon(Weapon& weapon)
{
    this->_weapon = &weapon;
}