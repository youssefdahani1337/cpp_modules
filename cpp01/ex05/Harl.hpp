/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yodahani <yodahani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 17:29:04 by yodahani          #+#    #+#             */
/*   Updated: 2023/10/22 14:32:12 by yodahani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Harl
{
private:
    static const std::string _levels[4] ;
    void debug( void );
    void info( void );
    void warning( void );
    void error( void );
public:
    Harl();
    void    complain(std::string level);
};
