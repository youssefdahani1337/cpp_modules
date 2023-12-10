

#ifndef SHRUBERRY_CREATION_FORM_HPP
#define SHRUBERRY_CREATION_FORM_HPP

#include <iostream>
#include <fstream>
#include "AForm.hpp"

class ShrubberyCreationForm :public AForm
{
public:
	ShrubberyCreationForm();
	ShrubberyCreationForm(const std::string& target);
	ShrubberyCreationForm(const ShrubberyCreationForm& form);
	ShrubberyCreationForm&  operator=(const ShrubberyCreationForm& form);
	~ShrubberyCreationForm();

	void	action(void) const;
};
#endif