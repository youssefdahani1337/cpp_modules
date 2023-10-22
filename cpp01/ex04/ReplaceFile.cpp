/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ReplaceFile.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yodahani <yodahani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 13:43:17 by yodahani          #+#    #+#             */
/*   Updated: 2023/10/20 17:21:35 by yodahani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream> 
#include <sstream>
#include <string>
std::fstream *openFile(std::string filename)
{
    std::fstream *file = new std::fstream;

    file->open(filename, std::ios::in);
    if(!file->is_open())
    {
        std::cout << "Cannot open the file !! \n";
        exit(1);
    }
    return (file);
}

void    fill_file(std::string fileName, std::string newContent)
{
    fileName.append(".replace");
    std::ofstream newFile(fileName);
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
    size_t  pos;

    std::fstream *file = openFile(filename);
    std::stringstream buffer ;
    buffer << file->rdbuf();
    std::string str = buffer.str();
    
    file->close();
    delete file;
    
    while (str.find(s1) != std::string::npos)
    {
        pos = str.find(s1);
        str.erase(pos, len_s1);
        str.insert(pos, s2);
    }
    fill_file(filename, str);
    std::cout << "Done\n";
}