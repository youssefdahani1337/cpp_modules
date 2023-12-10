

#include "Cat.hpp"


Cat::Cat():AAnimal("Cat")
{
	std::cout << "[Cat] Constructor" << std::endl;
	this->brain = new Brain();
}

Cat::Cat(const Cat& copy):AAnimal(copy)
{
	std::cout << "[Cat] Copy constructor" << std::endl;
	this->brain = new Brain(*copy.brain);
}


Cat& Cat::operator=(const Cat& assign)
{
	std::cout << "[Cat] Assignement operator" << std::endl;
	setType(assign.type);
	delete this->brain;
	this->brain = new Brain(*assign.brain);
	return (*this);
}


void	Cat::makeSound(void) const
{
	std::cout << "[Cat] Mio mio" << std::endl;
}


Cat::~Cat()
{
	delete this->brain;
 	std::cout << "[Cat] \t\tDestructor" << std::endl;
}
