/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yodahani <yodahani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 11:07:01 by yodahani          #+#    #+#             */
/*   Updated: 2023/10/22 14:36:21 by yodahani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
class Harl
{
private:
   static const  std::string _levels[4];
    void debug( void );
    void info( void );
    void warning( void );
    void error( void );
public:
    Harl();
    void    complain(std::string level);
};