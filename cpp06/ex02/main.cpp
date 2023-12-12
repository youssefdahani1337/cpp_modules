#include "convert.hpp"

class Unknown : public Base
{
};

int main(void)
{
    Base *base = generate();
    identify(base);
    identify(*base);

    std::cout << "---------------------" << std::endl;

    Base *base2 = new Unknown;

    identify(base2);
    identify(*base2);

    
    delete base;  
    delete base2;
    return (0);
}