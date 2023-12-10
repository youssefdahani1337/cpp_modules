#ifndef INTERN_HPP
#define INTERN_HPP

#include <iostream>
#include"RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include <iostream>
class Intern
{

	static std::string forms[4];
	AForm *newShrubbery(const  std::string & target);
	AForm *newPresident(const  std::string & target);
	AForm *newRobotomy(const  std::string & target);
public:
	Intern();
	Intern(const Intern& i);
	Intern& operator= (const Intern& i);
	~Intern();

	AForm*	makeForm(const std::string& name, const std::string& target);
	
	class FormNotFound : public std::exception
	{
		virtual const char *what() const throw();
	};
};

#endif