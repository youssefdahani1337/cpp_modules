#include <iostream>
#include "easyfind.hpp"
#include <vector>
#include <list>
#include <deque>

int main()
{
	try
	{
		
		std::vector<int> vec;
		vec.push_back(1);
		vec.push_back(2);
		vec.push_back(3);
		vec.push_back(4);
		vec.push_back(5);

		std::vector<int>::iterator it = easyfind(vec, 3);
		std::cout <<  *it << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << "---------------------" << std::endl;

	try
	{
		std::list<int> list;

		list.push_back(1);
		list.push_back(2);
		list.push_back(3);
		list.push_back(4);
		list.push_back(5);
		
		std::list<int>::iterator it = easyfind(list, 9);
		std::cout <<  *it << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return (0);
}
