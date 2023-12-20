
#include "Span.hpp"

Span::Span() : N(0), count(0) {}

Span::Span(unsigned int N) : N(N), count(0) {}

Span::Span(const Span& span) : N(span.N),count(span.count), lst(span.lst) {}

Span& Span::operator=(const Span& span)
{
    if (this == &span)
    {
        count = span.count;
        N = span.N;
        lst = span.lst;
    }
    return (*this);
}

Span::~Span() {}

void Span::addNumber(int n)
{
    if (count == N)
        throw std::out_of_range("Span is full");
    lst.push_back(n);
    count++;
}

unsigned int  Span::shortestSpan()
{
	list_iter::iterator iter = lst.begin();
	
	iter ++;
	
	unsigned int shortspan = ft_abs(*(lst.begin()) - *iter);
	unsigned int tmp;


	if (count <= 1)
		throw std::out_of_range("Span is empty or has only one element");

	for (list_iter::iterator it = lst.begin(); it != lst.end(); it++)
	{
		for (list_iter::iterator it2 = it ; it2 != lst.end(); it2++)
		{
			if (it == it2)
				continue;
			tmp = ft_abs(*(it) - *(it2));
			if (tmp < shortspan)
				shortspan = tmp;
		}
	}
	return (shortspan);
}

unsigned int Span::longestSpan()
{
	if (count <= 1)
		  throw std::out_of_range("Span is empty or has only one element");
	
	list_iter::iterator iter = lst.begin();
	iter ++;
	
	unsigned int longspan = ft_abs(*(lst.begin()) - *iter);
	unsigned int tmp;
	

	for (list_iter::iterator it = lst.begin(); it != lst.end(); it++)
	{
		for (list_iter::iterator it2 = it; it2 != lst.end(); it2++)
		{
			if (it == it2)
				continue;
			tmp = ft_abs(*(it) - *(it2));
			if (tmp > longspan)
				longspan = tmp;
		}
	}
	return (longspan);
}

const std::list<int>  *Span::getList() const
{
	return (&lst);
}

void    Span::addNumber(const std::list<int> &l)
{
	lst.insert(lst.end(), l.begin(), l.end());
}


std::ostream& operator<<(std::ostream& out, const Span & sp)
{
	list_iter::const_iterator it = sp.getList()->begin();
	list_iter::const_iterator end = sp.getList()->end();
	while (it != end)
	{
		out << *it << " ";
		it ++;
	}
	return (out);
}


unsigned int Span::ft_abs(int n)
{
	if (n >= 0)
		return (n);
	return (n * -1);

}
