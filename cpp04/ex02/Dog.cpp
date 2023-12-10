 

#include "Dog.hpp"


Dog::Dog():AAnimal("Dog")
{
	std::cout << "[Dog] Constructor" << std::endl;
	this->brain = new Brain();
}

Dog::Dog(const Dog& copy):AAnimal(copy)
{
	std::cout << "[Dog] Copy constructor" << std::endl;
	this->brain = new Brain(*copy.brain);
}

Dog& Dog::operator=(const Dog& assign)
{
	std::cout << "[Dog] assignement operator" << std::endl;
	setType(assign.type);
	delete this->brain;
	this->brain = new Brain(*assign.brain);
	return (*this);
}

void	Dog::makeSound(void) const
{
	std::cout << "[Dog] Haw haw" << std::endl;
}

Dog::~Dog()
{
	delete this->brain;
	std::cout << "[Dog] \tDestructor" << std::endl;
}
