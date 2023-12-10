#include "AAnimal.hpp"

AAnimal::AAnimal()
{
	std::cout << "[AAnimal] Constructor" << std::endl;
}

AAnimal::AAnimal(const std::string& type):type(type)
{
	std::cout << "[AAnimal] Parameterized" << std::endl;
}

AAnimal::AAnimal(const AAnimal& copy)
{
	std::cout << "[AAnimal] Copy constructor" << std::endl;
	this->type = copy.type;
}

AAnimal& AAnimal::operator=(const AAnimal& assign)
{
	std::cout << "[AAnimal] Assignement operator" <<  std::endl;	
	this->type = assign.type;
	return (*this);
}

std::string	AAnimal::getType() const
{
	std::cout << "[AAnimal] Get type" << std::endl;
	return (this->type);
}

void	AAnimal::setType(const std::string& type)
{
	std::cout << "[AAnimal] Set type" << std::endl;
	this->type = type;
}

AAnimal::~AAnimal()
{
	std::cout << "[AAnimal] \tDestructor" << std::endl;
}
