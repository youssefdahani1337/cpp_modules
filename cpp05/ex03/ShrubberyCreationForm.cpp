
#include "ShrubberyCreationForm.hpp"
ShrubberyCreationForm::ShrubberyCreationForm()
:AForm("No name", 145,137){}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string& target)
:AForm(target, 145,137){}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& f)
:AForm(f){}


ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& f)
{
	this->setSign(f.getSign());
	return (*this);
}

void	ShrubberyCreationForm::action(void) const 
{
	std::fstream file;
	std::string s(getName());

	s.append("_shrubbery");
	file.open(s.c_str(), std::ios::out);

	if (!file)
	{
		std::cerr << "Oops!!" << std::endl;
		return;
	}

	file << "	      _-_" << std::endl;
	file << "    /~~   ~~\\" << std::endl;
	file << " /~~         ~~\\" << std::endl;
	file << "{               }" << std::endl;
	file << " \\  _-     -_  /" << std::endl;
	file << "   ~  \\\\ //  ~" << std::endl;
	file << "_- -   | | _- _" << std::endl;
	file << "  _ -  | |   -_" << std::endl;
	file << "      // \\\\" << std::endl;
	
	file.close();
}

ShrubberyCreationForm::~ShrubberyCreationForm() {}