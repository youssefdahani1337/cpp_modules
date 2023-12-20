
#ifndef ITER_HPP
# define ITER_HPP

#include <cstddef>
#include <iostream>

template<typename T>
void print(T value)
{
    std::cout << value << std::endl;
}

template <typename T, typename U>
void iter(T *arr, size_t n, void (*f)(U  &))
{
    for (size_t i = 0; i < n; i++)
        f(arr[i]);
}

#endif