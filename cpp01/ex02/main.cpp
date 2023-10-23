/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yodahani <yodahani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 22:37:18 by yodahani          #+#    #+#             */
/*   Updated: 2023/10/23 14:25:41 by yodahani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>

int main()
{
    std::string msg = "HI THIS IS BRAIN";

    std::string* PTR = &msg;

    std::string& REF = msg;

    std::cout << "The memory address of the string variable\t" << &msg<< std::endl;
    std::cout << "The memory address held by stringPTR\t" << PTR<< std::endl;
    std::cout << "The memory address held by stringREF\t" << &REF << std::endl;

    std::cout << "The value of the string variable \t" << msg << std::endl;
    std::cout << "The value pointed to by stringPTR \t" << *PTR<< std::endl;
    std::cout << "The value pointed to by stringREF \t" << REF << std::endl;

    return (0);
}