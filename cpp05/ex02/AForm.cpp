#include "AForm.hpp"
#include "Bureaucrat.hpp"

AForm::AForm()
:name("No name"),sign(0), gradeSign(150), gradeExec(149){}

AForm::AForm(const std::string& name, const short& gradesign, const short& gradeexec)
:name(name), sign(0), gradeSign(gradesign), gradeExec(gradeexec){}

AForm::AForm(const AForm& f)
:name(f.name),sign(f.sign),gradeSign(f.gradeSign),gradeExec(f.gradeExec){}

AForm& AForm::operator=(const AForm& f)
{
	this->sign = f.sign;
	return (*this);
}

std::string AForm::getName(void) const {return (this->name);}

bool		AForm::getSign(void) const {return (this->sign);}

short		AForm::getGradeSign(void) const {return(this->gradeSign);}

short		AForm::getGradeExec(void) const {return (this->gradeExec);}

void		AForm::setSign(bool b){this->sign = b;}


void	AForm::beSigned(const Bureaucrat& b)	
{
	if (b.getGrade() >= this->gradeSign)
		throw GradeTooLowException();
	this->sign = true;
}

void	AForm::execute(const Bureaucrat& b) const 
{
	if (b.getGrade() <= this->gradeExec && this->sign)
		action();
	else
		throw AForm::GradeTooLowException();
}

const char*	AForm::GradeTooHighException::what(void) const throw()
{
	return ("[AForm] The garde is too high");
}

const char*	AForm::GradeTooLowException::what(void) const throw()
{
	return ("[AForm] The garde is too low");
}

std::ostream& operator<< (std::ostream& out, const AForm& form)
{
	std::string s;
	
	s = form.getSign() >  0 ? "signed" : "not signed";

 	out << "AForm name: " << form.getName() 
		<< " is " << s 
		<< " ,garde to sign: " << form.getGradeSign()
		<< " ,garde to execute: " << form.getGradeExec() ;
	return (out);

}


AForm::~AForm() {}