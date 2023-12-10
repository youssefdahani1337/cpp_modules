/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yodahani <yodahani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 17:07:55 by yodahani          #+#    #+#             */
/*   Updated: 2023/11/16 17:15:58 by yodahani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAG_TRAP_HPP
#define FRAG_TRAP_HPP

#include "ClapTrap.hpp"
#include <iostream>

class FragTrap: public ClapTrap
{

public:
    FragTrap();
    FragTrap(const std::string& );
    ~FragTrap();

    FragTrap(const FragTrap&);
    FragTrap& operator= (const FragTrap&);

    void highFivesGuys(void) const;
};

#endif