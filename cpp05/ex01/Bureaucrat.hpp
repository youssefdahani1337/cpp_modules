
#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP


#include <iostream>
#include "Form.hpp"

class Form;
class Bureaucrat
{
private:
	const std::string name;
	short	grade;

public:
	Bureaucrat();
	Bureaucrat(const std::string& name, const short& grade);
	Bureaucrat(const Bureaucrat& bureaucrat);
	Bureaucrat& operator=(const Bureaucrat& bureaucrat);
	~Bureaucrat();

	std::string	getName(void) const ;
	short getGrade(void) const ;

	void	incrementGrade(void);
	void	decrementGrade(void);

	void	signForm(Form& form);
	class GradeTooHighException: public std::exception 
	{
		virtual const char* what() const throw();
	};
	class GradeTooLowException: public std::exception 
	{
		virtual const char* what() const throw();
	};
};

std::ostream&	operator<<(std::ostream& out, const Bureaucrat& bureaucrat);
#endif