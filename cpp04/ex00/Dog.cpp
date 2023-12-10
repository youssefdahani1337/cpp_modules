 

#include "Dog.hpp"


Dog::Dog():Animal("Dog")
{
	std::cout << "[Dog] Constructor" << std::endl;
}

Dog::Dog(const Dog& copy):Animal(copy)
{
	std::cout << "[Dog] Copy constructor" << std::endl;
}

Dog& Dog::operator=(const Dog& assign)
{
	setType(assign.type);
	std::cout << "[Dog] assignement operator" << std::endl;
	return (*this);
}

void	Dog::makeSound(void) const
{
	std::cout << "[Dog] Haw haw" << std::endl;
}

Dog::~Dog()
{
	std::cout << "[Dog] \t\tDestructor" << std::endl;
}
