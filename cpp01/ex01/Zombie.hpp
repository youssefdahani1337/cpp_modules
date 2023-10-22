/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yodahani <yodahani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 16:15:15 by yodahani          #+#    #+#             */
/*   Updated: 2023/10/22 18:55:09 by yodahani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef _ZOMBIE_HPP
#define _ZOMBIE_HPP

#include <iostream>

class Zombie
{
private:
    std::string name;
public:
   Zombie();
    Zombie(std::string name);
    ~Zombie();
    void    announce(void);
    Zombie* zombieHorde( int N, std::string name );
};
Zombie* zombieHorde( int N, std::string name );

#endif