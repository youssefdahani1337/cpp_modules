

#include "iter.hpp"
#include <iostream>
int main()
{

    int arr[5] = {1,2,3,4,5};
    iter<int>(arr, 5, print);
    std::cout << "--------------------------------------------" << std::endl;
    std::string s[5] = {"hello", "hi", "Yo", "whatsp", "bue"};
    iter(s, 5, print);
    return (0);
}