/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yodahani <yodahani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 15:40:51 by yodahani          #+#    #+#             */
/*   Updated: 2023/10/23 14:26:27 by yodahani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Zombie.hpp"
Zombie* newZombie( std::string name );
void randomChump( std::string name );

int main(void)
{
    Zombie zombie_1("Gold");

    Zombie* zombie_2 = newZombie("sliver");
    zombie_2->announce();

    randomChump("bronze");    

    delete zombie_2;
    return (0);
}