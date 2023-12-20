


template<typename T>
Array<T>::Array(void):_size(0), arr(new T())
{}

template<typename T>
Array<T>::Array(unsigned int n):_size(n), arr(new T[n])
{
    for (size_t i = 0; i < n; i++)
        arr[i] = 0;
}

template<typename T>
Array<T>::Array(Array const & copy)
:_size(copy.size()), arr(new T[copy.size()])
{
    for (size_t i = 0; i < _size; i++)
        this->  arr[i] = copy.arr[i];
}

template<typename T>
Array<T>& Array<T>::operator=(Array const & assign)
{
    if (this != &assign)
    {
        delete[] arr;
        _size = assign.size();
         arr = new T(assign.size());
        for (size_t i = 0; i < _size; i++)
            this->  arr[i] = assign.arr[i];
    }
    return (*this);
}

template<typename T>
T&   Array<T>::operator[] (unsigned int i) const
{
    if (i >= _size)
        throw std::out_of_range("out of the range");
    return (arr[i]);
}

template<typename T>
unsigned int Array<T>::size(void) const {return (_size);}

template<typename T>
Array<T>::~Array(void)
{
    if (_size == 0)
        delete arr;
    else
        delete[] arr;
}

template<typename T>
std::ostream& operator<< (std::ostream & out, const  Array<T>&   arr)
{
    for (size_t i = 0; i < arr.size(); i++)
        out << arr[i] << " ";    
    return (out);
}