

#include "Cat.hpp"


Cat::Cat():Animal("Cat")
{
	std::cout << "[Cat] Constructor" << std::endl;
}

Cat::Cat(const Cat& copy):Animal(copy)
{
	std::cout << "[Cat] Copy constructor" << std::endl;
}


Cat& Cat::operator=(const Cat& assign)
{
	setType(assign.type);
	std::cout << "[Cat] Assignement operator" << std::endl;
	return (*this);
}


void	Cat::makeSound(void) const
{
	std::cout << "[Cat] Mio mio" << std::endl;
}

Cat::~Cat()
{
  std::cout << "[Cat] \t\tDestructor" << std::endl;
}