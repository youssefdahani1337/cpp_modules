
#include "Bureaucrat.hpp"
#include "AForm.hpp"
Bureaucrat::Bureaucrat():name("no name"), grade(150){}

Bureaucrat::Bureaucrat(const std::string& name, const short& grade)
:name(name), grade(grade)
{
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::Bureaucrat(const Bureaucrat& b)
:name(b.name), grade(b.grade){}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& b)
{
	grade = b.grade;
	return (*this);
}

std::string Bureaucrat::getName(void) const  {return (this->name);}
short		Bureaucrat::getGrade(void) const {return(this->grade);}

void	Bureaucrat::incrementGrade(void)
{
	this->grade --;
	if (this->grade < 1)
		throw GradeTooHighException();
}
void	Bureaucrat::decrementGrade(void)
{
	this->grade ++;
	if (this->grade > 150)
		throw GradeTooLowException();
}

void	Bureaucrat::signForm( AForm & form) const 
{
	try
	{
		form.beSigned(*this);
		if (form.getSign())
			std::cout << this-> name << " signed " << form.getName() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
		std::cout << this-> name << " couldn't sign " << form.getName()
		<< " because " << " the grade of the form is too high "<<std::endl;
	}
}

void	Bureaucrat::executeForm(AForm & form) const 
{
	try
	{
		form.execute(*this);
		std::cout << this->name << " executed " << form.getName() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
		std::cout << this->name << " Can't execute " << form.getName() << std::endl;
	}
	
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("The garde is too high");
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("The garde is too Low");
}

std::ostream&	operator<<(std::ostream& out, const Bureaucrat& b)
{
	out << b.getName() << ", bureaucrat garde " << b.getGrade();
	return (out);
}

Bureaucrat::~Bureaucrat(){}
