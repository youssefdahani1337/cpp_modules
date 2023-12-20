
#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <stdexcept>
#include <iostream>

template <typename T>
class Array
{

    unsigned int _size;
    T *arr;

public:
    Array(void);
    Array(unsigned int n);
    Array(Array const & copy);
    Array& operator=(Array const & assign);
    T& operator[] (unsigned int i) const;
    unsigned int size(void)const;
    ~Array(void);
};

#include "Array.tpp"
#endif 