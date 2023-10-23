/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yodahani <yodahani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 23:05:26 by yodahani          #+#    #+#             */
/*   Updated: 2023/10/23 19:30:53 by yodahani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef _HUMANB_HPP
#define _HUMANB_HPP

#include "Weapon.hpp"
class HumanB
{
public:
    Weapon *weapon;
    std::string name;

public:
    HumanB();
    HumanB(std::string name);

    void    attack(void);
    void    setWeapon(Weapon& weapon);
};
#endif