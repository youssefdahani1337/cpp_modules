/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yodahani <yodahani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 13:40:10 by yodahani          #+#    #+#             */
/*   Updated: 2023/10/22 15:05:36 by yodahani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __PHONEBOOK_H__
#define __PHONEBOOK_H__

#include <iostream>
#include "Contact.hpp"

class PhoneBook
{
    void    _print_book();

    int     _count;
    bool    _max;

    public:
        Contact contact[8];

    public:
        PhoneBook();

        void			add();
        void			search();
        static void		ft_exit();
        ~PhoneBook();
    private:
};

#endif