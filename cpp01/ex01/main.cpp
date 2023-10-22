/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yodahani <yodahani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 20:13:16 by yodahani          #+#    #+#             */
/*   Updated: 2023/10/22 18:56:35 by yodahani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

int main()
{

    const int size = 4;
    std::string name = "Youssef";

    Zombie* zombies = zombieHorde(size, name);
    for (size_t i = 0; i < size; i++)
        zombies[i].announce();
    delete[] zombies;
   system("leaks Zombie");
    return (0);
}