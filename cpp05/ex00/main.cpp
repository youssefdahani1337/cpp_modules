

#include "Bureaucrat.hpp"
void hr(void)
{
	std::cout << "-------------------------------------------------------" << std::endl;
}


int main()
{
	try
	{
		Bureaucrat b1 ("captain", 149);
		Bureaucrat b2;
		b2 = b1;
		b1.incrementGrade();
		b2.decrementGrade();

		std::cout << "b1 :" << b1 << std::endl;
		std::cout << "b2 :" << b2 << std::endl;
		b2.decrementGrade();

	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	hr();
	try
	{
		Bureaucrat b1("khona", -1);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	
}