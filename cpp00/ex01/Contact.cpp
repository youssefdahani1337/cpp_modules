/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yodahani <yodahani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 13:54:32 by yodahani          #+#    #+#             */
/*   Updated: 2023/10/22 21:07:00 by yodahani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"

Contact::Contact(){}
Contact::~Contact(){}

void    Contact::_print_mem(std::string str)
{
    std::replace(str.begin(), str.end(), '\t', ' ');
    if (str.length() <= 10)
        std::cout << std::setw(10) << std::right << std::setfill(' ') << str ;
    else if (str.length() > 10)
        std::cout << std::right<< str.substr(0, 9) << '.';
    std::cout<< "|";
}

bool    check_num(std::string str)
{
    
    if (str.front() != '+' && !isdigit(str.front()))
        return (false);
    for (size_t i = 1; i < str.length(); i++)
    {
        if (!std::isdigit(str[i]))
            return (false);
    }
    return (true);
}

void    Contact::_add_field(const char *msg, std::string& str,  bool c)
{
    while (1337)
    {
        std::cout << "Please Enter " << msg << std::endl;
        std::getline(std::cin, str);
        if (std::cin.fail() || std::cin.eof())
            PhoneBook::ft_exit();
        if (c && !str.empty() && !check_num(str))
            continue ;
        if (!str.empty())
            break ;
        std::cout << "try again !!\n";
    }
}

void    Contact::addUpdateContact()
{
    _add_field("First Name", fname);
    _add_field("Last Name",lname);
    _add_field("Nickname", nickname);
    _add_field("Phone Number", phonenum,true);
    _add_field("Darkest Secret", darksecret);
    std::cout << "<---- Contact added successfully. ---->\n\n";
}

void    Contact::printContact(int index)
{
    _print_mem(std::to_string(index + 1));
    _print_mem(fname);
    _print_mem(lname);
    _print_mem(nickname);
    std::cout << std::endl;
}
void    Contact::printInfos()
{
    std::cout << "First Name: " << fname << std::endl;
    std::cout << "Last Name: " << lname << std::endl;
    std::cout << "Nickname: " << nickname << std::endl;
    std::cout << "Phone Number: " << phonenum << std::endl;
    std::cout << "Darksecret: " << darksecret << std::endl;
}