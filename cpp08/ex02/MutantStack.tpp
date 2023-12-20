

template<typename T, typename Container>
MutantStack<T, Container>::MutantStack()
{

}

template<typename T, typename Container>
MutantStack<T, Container>::MutantStack(const MutantStack& m):std::stack<T>(m)
{
    (void)m;
}

template<typename T, typename Container>
MutantStack<T, Container>& MutantStack<T, Container>::operator=(const MutantStack& m)
{
    (void)m;
    return (*this);
}

template<typename T, typename Container>
MutantStack<T, Container>::~MutantStack(){}

template<typename T, typename Container>
typename MutantStack<T, Container>::iterator MutantStack<T, Container>::begin(void) 
{
    return (this->c.begin());
}

template<typename T, typename Container>
typename MutantStack<T, Container>::iterator MutantStack<T, Container>::end(void)
{
    return (this->c.end());
}