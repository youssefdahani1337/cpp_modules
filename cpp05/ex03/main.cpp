#include <iostream>

#include "Intern.hpp"
void hr(void)
{
	std::cout << "-------------------------------------------------------------------" << std::endl;
}

int main()
{
	AForm* rrf = NULL;
	Intern i;
	try
	{
		rrf = i.makeForm("no no", "yo yo");
		if (rrf)
			std::cout << rrf->getName() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr <<"[1]" << e.what() << '\n';
	}
	delete rrf;
	hr();
	try
	{
		Intern i;
		Bureaucrat f("lolo", 2);
		rrf = i.makeForm("shrubbery creation", "coach");
		if (rrf)
		{
			f.signForm(*rrf);
			f.executeForm(*rrf);
		}
	}
	catch(const std::exception& e)
	{
		std::cerr <<"[2]" <<  e.what() << '\n';
	}
	delete rrf;
	
	return (0);
}