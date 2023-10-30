/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yodahani <yodahani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 15:16:55 by yodahani          #+#    #+#             */
/*   Updated: 2023/10/29 15:54:27 by yodahani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
Zombie::Zombie(){}

Zombie::Zombie(std::string name):name(name){}

Zombie::~Zombie(){std::cout << name << " die :(\n";}

void Zombie::setName(std::string name) { this->name = name; }

void Zombie::announce(void)
{
    if (!this->name.empty())
        std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}