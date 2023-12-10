
#include "ClapTrap.hpp"

int main(void)
{
    ClapTrap a("Joe");

    for(int i = 0; i < 9 ; i ++)
        a.attack("me");
    a.beRepaired(10);
    a.takeDamage(10);
    a.beRepaired(20);
    return (0);
}