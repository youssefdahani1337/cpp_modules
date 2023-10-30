/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yodahani <yodahani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 23:05:26 by yodahani          #+#    #+#             */
/*   Updated: 2023/10/29 22:30:39 by yodahani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef _HUMANB_HPP
#define _HUMANB_HPP

#include "Weapon.hpp"
class HumanB
{
private:
    std::string name;
    Weapon      *_weapon;

public:
    HumanB();
    HumanB(std::string name);

    void    attack(void);
    void    setWeapon(Weapon& weapon);
};
#endif