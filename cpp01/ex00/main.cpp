/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yodahani <yodahani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 15:40:51 by yodahani          #+#    #+#             */
/*   Updated: 2023/10/29 22:00:35 by yodahani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Zombie.hpp"

Zombie* newZombie( std::string name );
void    randomChump( std::string name );

int main(void)
{
    Zombie zombie_1("Gold");
    zombie_1.announce();
    Zombie* zombie_2 = newZombie(s);
    if (zombie_2 == nullptr)
        return (1);
    zombie_2->announce();

    randomChump("NULL");

    delete zombie_2;
    // system("leaks Zombie");
    return (0);
}
