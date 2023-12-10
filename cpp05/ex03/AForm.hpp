#ifndef AFORM_HPP
#define AFORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;
class AForm
{
private:
	const std::string	name;
	bool				sign;
	const short			gradeSign;
	const short			gradeExec;

public:
	AForm();
	AForm(const std::string& name, const short& gradesign, const short& gradeexec);
	AForm(const AForm& form);
	AForm&  operator=(const AForm& form);
	virtual ~AForm();

	std::string getName(void) const ;
	bool		getSign(void) const ;
	short		getGradeSign(void) const ;
	short		getGradeExec(void) const ;
	
	void		setSign(bool b);
	
	void	beSigned(const Bureaucrat& bureaucrat);
	void	execute(Bureaucrat const & executor) const;
	virtual void	action(void) const = 0;

	class GradeTooHighException: public std::exception
	{
		virtual	const char *what(void) const throw();
	};
	class GradeTooLowException: public std::exception
	{
		virtual	const char *what(void) const throw();
	};
};

std::ostream& operator<<(std::ostream& out, const AForm& form);

#endif