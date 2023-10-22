/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yodahani <yodahani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 14:06:01 by yodahani          #+#    #+#             */
/*   Updated: 2023/10/22 16:24:41 by yodahani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.hpp"

int main()
{
    std::string input;
    PhoneBook ph_book;

    while (1)
    {
        std::cout << "Please  Enter a command !!" << std::endl;
        getline(std::cin, input);
        if (std::cin.fail() || std::cin.eof())
            ph_book.ft_exit();
        if (input == "ADD")
             ph_book.add();
        else if (input == "SEARCH")
            ph_book.search();
        else if (input == "EXIT")
          ph_book.ft_exit();
        else
            std::cout << "Try again !!" << std::endl;
    }
    return (0);
}
