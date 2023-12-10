#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
:name("name"), hitPoint(10),energyPoint(10),attackDamage(0)
{
    std::cout << "[ClapTrap] Default constructor" << std::endl;
}
ClapTrap::ClapTrap(std::string name)
:name(name), hitPoint(10),energyPoint(10),attackDamage(0)
{
    std::cout << "[ClapTrap] Parameterized  constructor" << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "[ClapTrap] Destructor" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& copy)
{
    std::cout << "[ClapTrap] Copy constructor" << std::endl;

    this->name = copy.name;
    this->hitPoint = copy.hitPoint;
    this->energyPoint = copy.energyPoint;
    this->attackDamage = copy.attackDamage;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& copy)
{
    std::cout << "[ClapTrap] Assignement operator" << std::endl;

    this->name = copy.name;
    this->hitPoint = copy.hitPoint;
    this->energyPoint = copy.energyPoint;
    this->attackDamage = copy.attackDamage;
    return (*this);
}

void    ClapTrap::attack(const std::string& target)
{
    if (this->energyPoint && this->hitPoint)
    {
        this->energyPoint --;
        std::cout << "[ClapTrap] " << name << " attacks " << target<<  " causing "  
                 << attackDamage<< " points of damage!" << std::endl;
    }
    else
        std::cout <<"[ClapTrap] " << name << " has no enough energy point" << std::endl;
}

void    ClapTrap::takeDamage(unsigned int amount)
{
    if (this->hitPoint && this->hitPoint >= amount)
    {
        std::cout << this->name << " take damage of "<< amount << " point"<< std::endl;
        this->hitPoint -= amount;
    }
    else
    {
        this->hitPoint = 0;
        std::cout << name << " has not enough energy point to lose" << std::endl;
    }
}

void    ClapTrap::beRepaired(unsigned int amount)
{
    if (this->energyPoint && this->hitPoint)
    {
        std::cout<< name << " Repaired itself" << std::endl;
        this->energyPoint --;
        if (amount > UINT_MAX - this->hitPoint)
            this->hitPoint = UINT_MAX;
        else
            this->hitPoint += amount;
    }
    else
    {
        std::cout << "Can't repaired" << std::endl;
        std::cout << name << " has not enough energy point to lose" << std::endl;
    }
}