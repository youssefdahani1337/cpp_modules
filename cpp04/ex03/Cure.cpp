

#include "Cure.hpp"

Cure::Cure():AMateria("cure"){}

Cure::Cure(const Cure& cure):AMateria(cure){}

Cure& Cure::operator=(const Cure& cure)
{
	this->type = cure.type;
	return (*this);
}

AMateria* Cure::clone(void) const { return (new Cure());}

void Cure::use(ICharacter& target) 
{
	std::cout << "* heals "<< target.getName()<<"'s wounds *" << std::endl;
}

Cure::~Cure(){}

