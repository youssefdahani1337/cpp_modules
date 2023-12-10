

#include "Bureaucrat.hpp"


int main()
{

	try
	{	
		Bureaucrat b1 ("captain", 149);
		Form	f("CDI", 5, 15);
		
		b1.signForm(f);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}