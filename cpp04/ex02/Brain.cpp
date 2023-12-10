#include "Brain.hpp"


Brain::Brain()
{
	std::cout << "[Brain] Constructor" << std::endl;
}

Brain::Brain(const Brain& brain)
{
	std::cout << "[Brain] Copy Constructor" << std::endl;
	for(size_t i = 0; i < 100; i++)
		this->ideas[i] = brain.ideas[i];
}

Brain& Brain::operator= (const Brain& brain)
{
	std::cout << "[Brain] Assignement operator" << std::endl;
	for(size_t i = 0; i < 100; i++)
		this->ideas[i] = brain.ideas[i];
	return (*this);
}

Brain::~Brain()
{
	std::cout << "[Brain] \tDestructor" << std::endl;
}

