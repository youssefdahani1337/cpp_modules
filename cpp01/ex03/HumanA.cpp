/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yodahani <yodahani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 23:00:00 by yodahani          #+#    #+#             */
/*   Updated: 2023/10/20 13:21:18 by yodahani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name , Weapon& weapon) :name(name)
{
	this->weapon = &weapon;
}

void    HumanA::attack(void)
{
    std::cout << this->name
    << " attacks with their " << weapon->getType() << std::endl;
}
