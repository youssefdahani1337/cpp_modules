/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yodahani <yodahani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 21:35:17 by yodahani          #+#    #+#             */
/*   Updated: 2023/11/15 15:25:45 by yodahani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <climits>
class ClapTrap
{
protected:
    std::string          name;
    unsigned int         hitPoint;
    unsigned int         energyPoint;
    unsigned int         attackDamage;
    
public:
    ClapTrap();
    ClapTrap(std::string name);
    ~ClapTrap();

    ClapTrap(const ClapTrap& copy);
    ClapTrap& operator= (const ClapTrap& assign);
    
    void    attack(const std::string& target);
    void    takeDamage(unsigned int amount);
    void    beRepaired(unsigned int amount);
};

#endif