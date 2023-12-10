
#include "RobotomyRequestForm.hpp"
RobotomyRequestForm::RobotomyRequestForm()
:AForm("No name", 72,45){}

RobotomyRequestForm::RobotomyRequestForm(const std::string& target)
:AForm(target, 72,45){}


RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& f)
:AForm(f){}


RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& f)
{
	this->setSign(f.getSign());
	return (*this);
}

void	RobotomyRequestForm::action(void) const 
{
	srand(time(0));
	if (rand() % 2)
		std::cout << getName() << " has been robotomized" << std::endl;
	else
		std::cout << "the robotomy failed" << std::endl;
}


RobotomyRequestForm::~RobotomyRequestForm() {}