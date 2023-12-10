



#include "FragTrap.hpp"

FragTrap::FragTrap():ClapTrap()
{
    std::cout << "[FragTrap]  Default Constructor" << std::endl;
    hitPoint =100;
    energyPoint = 100; 
    attackDamage = 30;
}
FragTrap::FragTrap(const std::string& name):ClapTrap(name)
{
    std::cout << "[FragTrap]  Parameterized Constructor" << std::endl;
    hitPoint =100;
    energyPoint = 100; 
    attackDamage = 30;
}

FragTrap::~FragTrap()
{
    std::cout << "[FragTrap]  Destructor" << std::endl;
}

FragTrap::FragTrap(const FragTrap& copy):ClapTrap(copy.name)
{
    std::cout << "[FragTrap] copy Constructor" << std::endl;
    this->hitPoint = copy.hitPoint ;
    this->energyPoint = copy.energyPoint ;
    this->attackDamage = copy.attackDamage ;
}

FragTrap& FragTrap::operator= (const FragTrap& assign)
{
    std::cout << "[FragTrap] assignement operator" << std::endl;
    this->name = assign.name;
    this->hitPoint = assign.hitPoint ;
    this->energyPoint = assign.energyPoint ;
    this->attackDamage = assign.attackDamage ;
    return (*this);
}

void    FragTrap::highFivesGuys(void) const
{
    std::cout << "[FragTrap] " << name << ": Positive high fives " << std::endl;
    std::cout << "Hit point " << hitPoint << std::endl;
    std::cout << "Energy Point " << energyPoint << std::endl;
    std::cout << "attack Damage " << attackDamage << std::endl;
}
