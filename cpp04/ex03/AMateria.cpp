


#include"AMateria.hpp"

AMateria::AMateria(){}

AMateria::AMateria(const std::string& type):type(type){}

AMateria::AMateria(const AMateria& amateria):type(amateria.type){}

AMateria& AMateria::operator=(const AMateria& amateria)
{
	this->type = amateria.type ;
	return (*this);
}

std::string const & AMateria::getType(void) const {return (this->type); }

void	AMateria::use(ICharacter& target)
{
	if (this->type ==  "cure")
		std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
	else if (this->type == "ice")
		std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
	else
		std::cout << "Unknown type" << std::endl;
}

AMateria::~AMateria(){}