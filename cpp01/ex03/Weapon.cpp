/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yodahani <yodahani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 22:49:23 by yodahani          #+#    #+#             */
/*   Updated: 2023/10/23 15:08:25 by yodahani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"


Weapon::Weapon(){}

Weapon::Weapon(std::string type) { this->type = type;}

Weapon::~Weapon() {}

const std::string& Weapon::getType(void) { return (this->type);}

void  Weapon::setType(std::string type) { this->type = type;}
