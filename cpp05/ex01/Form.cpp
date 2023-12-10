


#include "Form.hpp"
Form::Form()
:name("No name"),sign(0), gradeSign(150), gradeExec(149)
{}
Form::Form(const std::string& name, const unsigned short & gradesign, const unsigned short& gradeexec)
:name(name), sign(0), gradeSign(gradesign), gradeExec(gradeexec)
{}

Form::Form(const Form& f)
:name(f.name),sign(f.sign),gradeSign(f.gradeSign),gradeExec(f.gradeExec)
{}

Form& Form::operator=(const Form& f)
{
	this->sign = f.sign;
	return (*this);
}

std::string Form::getName(void) const {return (this->name);}

bool	Form::getSign(void) const {return (this->sign);}

unsigned short	Form::getGradeSign(void) const {return(this->gradeSign);}

unsigned short	Form::getGradeExec(void) const {return (this->gradeExec);}

void	Form::beSigned(const Bureaucrat & b)	
{
	if (b.getGrade() >= this->gradeSign)
		throw GradeTooLowException();
	this->sign = true;
}


const char*	Form::GradeTooHighException::what(void) const throw()
{
	return ("[Form] The garde too high");
}


const char*	Form::GradeTooLowException::what(void) const throw()
{
	return ("[Form] The garde too low");
}

std::ostream& operator<< (std::ostream& out, const Form& form)
{
	std::string s;
	
	s = form.getSign() >  0 ? "signed" : "not signed";

 	out << "Form name: " << form.getName() 
		<< " is " << s 
		<< " ,garde to sign: " << form.getGradeSign()
		<< " ,garde to execute: " << form.getGradeExec();
		
	return (out);
}


Form::~Form() {}