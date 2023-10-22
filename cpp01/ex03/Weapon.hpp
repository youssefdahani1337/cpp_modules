/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yodahani <yodahani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 22:49:29 by yodahani          #+#    #+#             */
/*   Updated: 2023/10/20 16:09:31 by yodahani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _WEAPON_HPP
#define _WEAPON_HPP
#include <iostream>

class Weapon
{
private:
    std::string  type;  

public:
    Weapon();
    Weapon(std::string type);
    const  std::string& getType(void);
    void          setType(std::string type);
    ~Weapon();
};

#endif