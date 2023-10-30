

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
    if (N <= 0)
    {
        std::cout << "Oops" << std::endl;
        exit(0);
    }
    Zombie* Zombozo = new Zombie[N];
    for (int i = 0; i < N; i++)
        Zombozo[i].setName(name);
    return (Zombozo);
}