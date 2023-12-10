

#include "WrongCat.hpp"

WrongCat::WrongCat():WrongAnimal("Cat")
{
	std::cout << "[WrongCat] Constructror" << std::endl;
}

WrongCat::WrongCat(const WrongCat& copy):WrongAnimal(copy)
{
	std::cout << "[WrongCat] Copy constructor" << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& assign)
{
	this->type = assign.type;
	return (*this);
}


void	WrongCat::makeSound(void) const
{
	std::cout << "maw maw" << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "[WongCat] \tDestructor" << std::endl;
}

