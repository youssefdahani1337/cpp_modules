

#include "Zombie.hpp"


Zombie* zombieHorde( int N, std::string name )
{
    
    Zombie* Zombozo = new Zombie[N];
    for (int i = 0; i < N; i++)
        Zombozo[i].setName(name);
    return (Zombozo);
}