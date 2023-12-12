
#include <iostream>
#include "ScalarConverter.hpp"

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Usage: ./convert [string]" << std::endl;
		return (1);
	}
	ScalarConverter::convert(argv[1]);

	// std::cout << "-------------------" << std::endl;
	// std::string str;
	// str.append(std::to_string(std::numeric_limits<float>::max()));
	// ScalarConverter::convert(str.c_str());
	return (0);	
}