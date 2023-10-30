/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yodahani <yodahani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 16:15:15 by yodahani          #+#    #+#             */
/*   Updated: 2023/10/29 22:09:42 by yodahani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef _ZOMBIE_HPP
#define _ZOMBIE_HPP

#include <iostream>

class Zombie
{
private:
    std::string
     name;

public:
    Zombie();
    Zombie(std::string name);
    ~Zombie();

    void    setName(std::string name);
    void    announce(void);
};

#endif