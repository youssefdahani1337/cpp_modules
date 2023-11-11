/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ReplaceFile.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yodahani <yodahani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 13:43:17 by yodahani          #+#    #+#             */
/*   Updated: 2023/10/30 13:13:53 by yodahani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream> 
#include <cstring>
#include <cstdlib>
#include <string>
#include <sstream>



void    fill_file(std::string fileName, std::string newContent)
{
    size_t pos = fileName.find_last_of('/');
    if (pos != std::string::npos)
        fileName = fileName.substr(pos+1);
    if (fileName.empty())
    {
        std::cerr  << "Something wrong !!" << std::endl;
        exit(0);
    }
    fileName.append(".replace");
    std::ofstream newFile(fileName.c_str());
    if (!newFile.is_open())
    {
        std::cerr << "Cannot create or open the replace file !!\n";
        exit(1);
    }
    newFile << newContent;
    newFile.close();
}

void    ft_replace(std::string filename, std::string s1, std::string s2)
{

    const size_t len_s1 = s1.length();
    const size_t len_s2 = s2.length();
    size_t  pos ;
    std::ifstream file(filename.c_str());
    if (!file.is_open())
    {
        std::cout << "Can't open the file" << std::endl;
        exit(2);
    }
    std::stringstream buffer ; 
    std::string       str;

    buffer << file.rdbuf();
    str = buffer.str();
    file.close();

    pos = 0;
    if (s1 != s2)
    {   
        while (str.find(s1, pos) != std::string::npos)
        {
            pos = str.find(s1, pos);
            str.erase(pos, len_s1);
            str.insert(pos, s2);
            pos += len_s2; 
        }
    }
   fill_file(filename, str);
    std::cout << "Done" << std::endl;
}
