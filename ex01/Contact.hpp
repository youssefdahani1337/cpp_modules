/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yodahani <yodahani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 14:00:52 by yodahani          #+#    #+#             */
/*   Updated: 2023/10/22 15:01:54 by yodahani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CONTACT_H__
#define __CONTACT_H__
#include <iostream>
#include <iomanip>

class Contact
{
private:
    void    _add_field(const char *msg, std::string& str,  bool c = 0);
    void    _print_mem(std::string str);

public:
    std::string  fname;
    std::string  lname;
    std::string  nickname;
    std::string  phonenum;
    std::string  darksecret;

    Contact();
    ~Contact();
    
    void    printInfos();
    void    addUpdateContact();
    void    printContact(int index);
};

#endif