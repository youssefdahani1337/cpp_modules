/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yodahani <yodahani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 13:08:55 by yodahani          #+#    #+#             */
/*   Updated: 2023/10/22 14:56:23 by yodahani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void    print_upper(char *str)
{
    int i;

    i = -1;
    while (str[++i])
        std::cout << (char)toupper(str[i]);
}
int main(int ac, char **av)
{
    int i;

    i = 0;
    if (ac == 1)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
        return (0);
    }
    while (av[++i])
        print_upper(av[i]);
    std::cout << std::endl;
    return (0);
}