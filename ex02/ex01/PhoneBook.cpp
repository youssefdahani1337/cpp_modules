/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yodahani <yodahani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 14:18:41 by yodahani          #+#    #+#             */
/*   Updated: 2023/10/22 16:32:17 by yodahani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

   
#include "PhoneBook.hpp"

PhoneBook::PhoneBook(){ _count = 0; _max = false;}
PhoneBook::~PhoneBook(){}

void    PhoneBook::add()
{
    contact[_count].addUpdateContact();
    if (++_count == 8)
    {
        _count = 0;
        _max = true;
    }
}

void    PhoneBook::search()
{
    int     index;

    index = -1;
    if (_count == 0 && !_max)
    {            
        std::cout << "Empty Phone Book" << std::endl;
        return ;
    }
    _print_book();
    while (1337)
    {   
        std::cout << "Please enter an index !! \n";
        
        if (!(std::cin >> index))
        {
            std::cout << "something is wrong \n";
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            if (std::cin.eof())
                ft_exit();
            continue ;
        }
        if (( index > _count && !_max) || index <= 0 || index > 8)
        {   
            std::cout << "Out of range !! try again\n";
        }
        else
        { 
            contact[--index].printInfos();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            break ;
        }
    }
}

void    PhoneBook::ft_exit()
{
    std::cout << "Bye!!" << std::endl;
    exit(0);    
}

void    PhoneBook::_print_book()
{
    int i;

    i = 0;
    std::cout << "*******************************************************\n";
    std::cout << "Index     |" << "First Name|" << "Last Name |" << "Nickname  |" << std::endl;
    std::cout << "*******************************************************\n";
    
        while ((i < _count && !_max) || (i < 8 && _max))
        {
            contact[i].printContact(i);
            i ++;
        }
    std::cout << "*******************************************************\n";
}