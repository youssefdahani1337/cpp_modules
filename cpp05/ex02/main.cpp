#include <iostream>

#include"RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"

void hr(void)
{
	std::cout << "-------------------------------------------------------------------" << std::endl;
}

int main()
{
	AForm *form ;
	Bureaucrat *b;
	try
	{
		form = new ShrubberyCreationForm("Art");
		b = new Bureaucrat("CEO", 5);

		b->signForm(*form);
		b->executeForm(*form);
		
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';

	}
	delete b;
	delete form;
	hr();
	
	try
	{
		b = new Bureaucrat("manager", 10);
		form = new PresidentialPardonForm("work vacation");
		b->executeForm(*form);
	
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	delete b;
	delete form;	
	hr();
	
	try
	{
		b = new Bureaucrat("Employee", 10);
		form = new RobotomyRequestForm("guess_what");
		form->beSigned(*b);
		b->executeForm(*form);
	
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	delete b;
	delete form;
	hr();
	try
	{
		b = new Bureaucrat("programmer", 125);
		form = new RobotomyRequestForm("Ai");
		form->beSigned(*b);
		b->executeForm(*form);

	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	delete b;
	delete form;
	return (0);
}