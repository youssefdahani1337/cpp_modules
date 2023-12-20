template <typename T>
typename T::iterator easyfind(T &c, int n)
{
    typename T::iterator it = std::find(c.begin(), c.end(), n);
    if (it == c.end())
        throw std::runtime_error("Element not found");
    return (it);
}