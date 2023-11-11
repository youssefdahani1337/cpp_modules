/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yodahani <yodahani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 11:11:29 by yodahani          #+#    #+#             */
/*   Updated: 2023/10/30 13:18:15 by yodahani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

const std::string Harl::_levels[4] = {"DEBUG", "INFO", "WARNING" , "ERROR"};

Harl::Harl(){}

void    Harl::debug(void)
{
    std::cout << "[ DEBUG ]"<< std::endl;
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void    Harl::info(void)
{
    std::cout << "[ INFO ]"<< std::endl;
    std::cout << "I cannot believe adding extra bacon costs more money. You didn`t put enough bacon in my burger! If you did, I wouldn`t be asking for more!" << std::endl;
}

void    Harl::warning(void)
{
    std::cout << "[ WARNING ]"<< std::endl;
    std::cout << "I think I deserve to have some extra bacon for free. I`ve been coming for years whereas you started working here since last month." << std::endl;
}

void    Harl::error(void)
{
    std::cout << "[ ERROR ]"<< std::endl;
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void    Harl::complain(std::string level)
{
    int i;

    i = -1;
    void (Harl::*funPtr[])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    
    for(i = 0; i < 4; i ++)
    {
        if (level == _levels[i])
            break;
    }
    switch (i)
    {
        case 0:
            (this->*funPtr[i++])();
        case 1:
            (this->*funPtr[i++])();
        case 2:
            (this->*funPtr[i++])();
        case 3:
            (this->*funPtr[i])();
            break ;
        default:
            std::cout << "I cannot understand your complaint." << std::endl;
            break;
    }
    
}
