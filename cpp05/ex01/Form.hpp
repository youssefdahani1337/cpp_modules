
#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;
class Form
{
private:
	const std::string	name;
	bool				sign;
	const unsigned  short			gradeSign;
	const unsigned  short			gradeExec;

public:
	Form();
	Form(const std::string& name, const unsigned short & gradesign, const unsigned short& gradeexec);
	Form(const Form& form);
	Form&  operator=(const Form& form);
	~Form();

	std::string getName(void) const ;
	bool		getSign(void) const ;
	unsigned short		getGradeSign(void) const ;
	unsigned short		getGradeExec(void) const ;
	
	void	beSigned(const Bureaucrat& bureaucrat);

	class GradeTooHighException: public std::exception
	{
		virtual	const char *what(void) const throw();
	};
	class GradeTooLowException: public std::exception
	{
		virtual	const char *what(void) const throw();
	};
};

std::ostream& operator<<(std::ostream& out, const Form& form);

#endif