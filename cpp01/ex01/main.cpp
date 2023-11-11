/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yodahani <yodahani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 20:13:16 by yodahani          #+#    #+#             */
/*   Updated: 2023/10/30 12:37:38 by yodahani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

Zombie* zombieHorde( int N, std::string name );

int main()
{

    const int size =4;
    const std::string name = "Zombozo";

    Zombie* zombies = zombieHorde(size, name);
    if (zombies)
        return (1);
    for (size_t i = 0; i < size; i++)
        zombies[i].announce();

    delete[] zombies;
    //system("leaks Zombie");
    return (0);
}