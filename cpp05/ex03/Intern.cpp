

#include "Intern.hpp"
std::string Intern::forms[4] = {"shrubbery creation", "robotomy request", "presidential pardon"};
Intern::Intern(){}
Intern::Intern(const Intern& i){(void)i;}
Intern& Intern::operator=(const Intern& i)
{
	(void)i;
	return (*this);
}

AForm *Intern::newShrubbery(const  std::string & target)
{
	return (new ShrubberyCreationForm(target));
}
AForm *Intern::newPresident(const  std::string & target)
{
	return (new PresidentialPardonForm(target));
}
AForm *Intern::newRobotomy(const  std::string & target)
{
	return (new RobotomyRequestForm(target));
}

AForm* Intern::makeForm(const std::string& name, const std::string& target)
{
	size_t i;
	
	typedef AForm* (Intern::*myForm)(const std::string& );

	myForm f[4] = {
		&Intern::newShrubbery,
		&Intern::newPresident, 
		&Intern::newRobotomy
	};
	for (i = 0; i < 4; i++)
	{
		if (forms[i] == name)
			return ((this->*f[i])(target));
	}
	throw Intern::FormNotFound();
	return (NULL);	
}

const char *Intern::FormNotFound::what() const throw()
{
	return ("Form not found");
}

Intern::~Intern(){}

