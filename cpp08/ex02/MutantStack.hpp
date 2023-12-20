
#ifndef MUTANSTACK_HPP
#define MUTANSTACK_HPP

#include <iostream>
#include <list>
#include <stack>
#include <deque>

template<typename T, typename Container=std::deque<T> >
class MutantStack : public std::stack<T>
{
    
public:

    typedef typename std::stack<T, Container>::container_type::iterator iterator; 
   
    MutantStack();
    MutantStack(const MutantStack& m);
    MutantStack& operator=(const MutantStack& m);
    ~MutantStack();
    
    iterator begin();
    iterator end();
};

#include "MutantStack.tpp"

#endif