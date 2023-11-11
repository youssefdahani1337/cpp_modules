/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yodahani <yodahani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 15:40:51 by yodahani          #+#    #+#             */
/*   Updated: 2023/10/30 12:36:03 by yodahani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Zombie.hpp"

Zombie* newZombie( std::string name );
void    randomChump( std::string name );

int main(void)
{
    Zombie zombie_1("aaaa");
    zombie_1.announce();
    Zombie* zombie_2 = newZombie("bbbb");
    if (!zombie_2)
        return (1);
    zombie_2->announce();

    randomChump("ccc");

    delete zombie_2;
    // system("leaks Zombie");
    return (0);
}
