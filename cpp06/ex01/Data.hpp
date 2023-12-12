

#ifndef DATA_HPP
#define DATA_HPP

#include <iostream>


typedef struct  t_Data
{
    t_Data(const std::string & , const int &);
    std::string name;
    int age;
} Data;

#endif