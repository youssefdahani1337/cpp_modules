#include <iostream>
#include "Span.hpp"

int main()
{
	
	Span sp = Span(5);
	std::list<int> lst;
	for (size_t i = 1; i <= 10000; i++)
		lst.push_back(i);
	
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);

	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	sp.addNumber(lst);
	//std::cout << sp << std::endl;
	return 0;
}