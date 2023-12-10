



#include "WrongAnimal.hpp"


WrongAnimal::WrongAnimal()
{
	std::cout << "[WrongAnimal] Default constructor" << std::endl;
}
WrongAnimal::WrongAnimal(const std::string& type):type(type)
{
	std::cout << "[WrongAnimal] Default constructor" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& copy)
{
	std::cout << "[WrongAnimal] Copy constructor" << std::endl;
	this->type = copy.type;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& assign)
{
	std::cout << "[WrongAnimal] Assignement operator" << std::endl;
	this->type = assign.type;
	return (*this);
}



void	WrongAnimal::setType(const std::string& type)
{
	std::cout << "[WrongAnimal] Set type" << std::endl;
	this->type = type;
}

std::string WrongAnimal::getType(void) const
{
	std::cout << "[WrongAnimal] [Get type]" << std::endl;
	return (this->type);
}

void WrongAnimal::makeSound(void) const
{

	std::cout << "The sound of the animal" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "[Wrong Animal] \tDestructor" << std::endl;
}
