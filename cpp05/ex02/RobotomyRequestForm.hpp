

#ifndef ROBOTOMY_REQUEST_Form_HPP
#define ROBOTOMY_REQUEST_Form_HPP
#include <cstdlib>
#include "AForm.hpp"

class RobotomyRequestForm: public AForm
{
public:

	RobotomyRequestForm();
	RobotomyRequestForm(const std::string& target);
	RobotomyRequestForm(const RobotomyRequestForm& form);
	RobotomyRequestForm&  operator=(const RobotomyRequestForm& form);
	~RobotomyRequestForm();

	void	action(void) const ;
};

#endif