


#ifndef PRESIDENTIALPARDON_HPP
#define PRESIDENTIALPARDON_HPP

#include <cstdlib> 
#include "AForm.hpp"


class PresidentialPardonForm: public AForm
{
public:
	PresidentialPardonForm();
	PresidentialPardonForm(const std::string& target);
	PresidentialPardonForm(const PresidentialPardonForm& form);
	PresidentialPardonForm&  operator=(const PresidentialPardonForm& form);
	~PresidentialPardonForm();

	void	action(void) const;
};

#endif