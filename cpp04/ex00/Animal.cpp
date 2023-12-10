#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "[Animal] Constructor" << std::endl;
}

Animal::Animal(const std::string& type):type(type)
{
	std::cout << "[Animal] Parameterized" << std::endl;
}

Animal::Animal(const Animal& copy)
{
	std::cout << "[Animal] Copy constructor" << std::endl;
	this->type = copy.type;
}

Animal& Animal::operator=(const Animal& assign)
{
	std::cout << "[Animal] Assignement operator" <<  std::endl;	
	this->type = assign.type;
	return (*this);
}

void	Animal::makeSound(void) const
{
	std::cout << "The sound of the animal" << std::endl;
}

std::string	Animal::getType() const
{
	std::cout << "[Animal] Get type" << std::endl;
	return (this->type);
}

void	Animal::setType(const std::string& type)
{
	std::cout << "[Animal] Set type" << std::endl;
	this->type = type;
}

Animal::~Animal()
{
	std::cout << "[Animal] \tDestructor" << std::endl;
}
