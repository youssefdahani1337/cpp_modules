#include "ScavTrap.hpp"

ScavTrap::ScavTrap():ClapTrap()
{
    std::cout << "[ScavTrap] Default Constructor" << std::endl;
    hitPoint = 100;
    energyPoint = 50;
    attackDamage = 20;
}

ScavTrap::ScavTrap(const std::string& name)
:ClapTrap(name)
{
    std::cout << "[ScavTrap] Parametrized Constructor" << std::endl;
    hitPoint =100;
    energyPoint = 50; 
    attackDamage = 20;
}

ScavTrap::~ScavTrap()
{
    std::cout << "[ScavTrap] Destructor" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& copy)
:ClapTrap(copy)
{
    this->hitPoint = copy.hitPoint ;
    this->energyPoint = copy.energyPoint ;
    this->attackDamage = copy.attackDamage ;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& assign)
{
    std::cout << "[ScavTrap] assignement operator" << std::endl;
    this->name = assign.name;
    this->hitPoint = assign.hitPoint ;
    this->energyPoint = assign.energyPoint ;
    this->attackDamage = assign.attackDamage ;
    return(*this);
}


void    ScavTrap::attack(const std::string& target)
{
    if (this->energyPoint)
    {
        this->energyPoint --;
        std::cout << "ScavTrap " << name << " attacks " << target<<  " causing "  
                 << attackDamage<< " points of damage!" << std::endl;
    }
    else
        std::cout << name << " has no enough energy point" << std::endl;
}

void ScavTrap::guardGate(void) const
{
    std::cout << "ScavTrap " << name << " is now in gate keeper mode."<< std::endl;
    std::cout << "Hit point " << hitPoint << std::endl;
    std::cout << "Energy Point " << energyPoint << std::endl;
    std::cout << "attack Damage " << attackDamage << std::endl;
}

