
#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP
#include <exception>

#include <iostream>
class Bureaucrat
{
private:
	const std::string name;
	short	grade;

public:
	Bureaucrat();
	Bureaucrat(const std::string& name, const unsigned  short& grade);
	Bureaucrat(const Bureaucrat& bureaucrat);
	Bureaucrat& operator=(const Bureaucrat& bureaucrat);
	~Bureaucrat();

	std::string	getName(void) const ;
	short		getGrade(void) const ;

	void	incrementGrade(void);
	void	decrementGrade(void);

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