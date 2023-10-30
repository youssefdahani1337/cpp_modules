/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yodahani <yodahani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 11:06:01 by yodahani          #+#    #+#             */
/*   Updated: 2023/10/22 18:53:08 by yodahani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Harl.hpp"



int main(int ac, char **av)
{
    if (ac != 2)
    {
        std::cout << "Enter 1 args" << std::endl;
        return (0);
    }
    Harl harl;

    harl.complain(std::string(av[1]));
    return (0);
}