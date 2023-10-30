/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yodahani <yodahani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 13:38:39 by yodahani          #+#    #+#             */
/*   Updated: 2023/10/28 20:57:21 by yodahani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void    ft_replace(std::string filename, std::string s1, std::string s2);

int main(int ac, char **av)
{
    if (ac != 4)
    {
        std::cout << "Please enter 3 args\n";
        return (1);
    }
    std::string fileName = av[1];
    std::string s1 = av[2];
    std::string s2 = av[3];
    
    if (fileName.empty())
    {
        std::cout << "One of the args is empty !!\n";
        return (1);
    }
    ft_replace(fileName, s1, s2);
    return (0);
}