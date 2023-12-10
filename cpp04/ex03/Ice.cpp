

#include "Ice.hpp"

Ice::Ice():AMateria("ice"){}

Ice::Ice(const Ice& Ice):AMateria(Ice){}

Ice& Ice::operator=(const Ice& Ice)
{
	this->type = Ice.getType();
	return (*this);
}

AMateria* Ice::clone(void) const {return (new Ice());}

void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName()<< " *" << std::endl;
}

Ice::~Ice(){}

