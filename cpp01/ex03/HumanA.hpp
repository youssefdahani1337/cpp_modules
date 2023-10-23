/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yodahani <yodahani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 22:57:02 by yodahani          #+#    #+#             */
/*   Updated: 2023/10/23 15:56:08 by yodahani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _HUMANA_HPP
#define _HUMANA_HPP

#include "Weapon.hpp"

class HumanA
{
private:
    std::string _name;
    Weapon&      _weapon;

public:
    HumanA(std::string name , Weapon& weapon);
    void    attack(void);
};

#endif