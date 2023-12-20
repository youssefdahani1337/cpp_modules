
#ifndef SPAN_HPP
# define SPAN_HPP
# include <list>

# include <iostream>
typedef std::list<int> list_iter;

class Span
{
private:
    unsigned int N;
    unsigned int count;
    std::list<int> lst;
public:

    Span();
    Span(unsigned int N);
    Span(const Span& span);
    Span& operator=(const Span& span);
    ~Span();

    static unsigned int ft_abs( int n);

    void            addNumber(int n);
    void            addNumber(const std::list<int> &l);
  
    unsigned int    shortestSpan();
    unsigned int    longestSpan();
    const std::list<int> *getList() const;

};

std::ostream& operator<<(std::ostream& out, const Span & sp);

#endif 