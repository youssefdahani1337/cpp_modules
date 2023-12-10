

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm()
:AForm("No target", 25, 5){}

PresidentialPardonForm::PresidentialPardonForm(const std::string& target)
:AForm(target, 25,5){}
PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& p)
:AForm(p){}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& f)
{
	this->setSign(f.getSign());
	return (*this);
}

void	PresidentialPardonForm::action(void) const
{
	std::cout << getName() << " has been pardon by Zaphod Beeblebrox" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm(){}