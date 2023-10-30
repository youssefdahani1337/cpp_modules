/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yodahani <yodahani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 23:00:00 by yodahani          #+#    #+#             */
/*   Updated: 2023/10/29 22:24:53 by yodahani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name , Weapon& weapon)
:_name(name), _weapon(weapon)
{}

void    HumanA::attack(void)
{
    std::cout << this->_name << " attacks with their " << _weapon.getType() << std::endl;
}
