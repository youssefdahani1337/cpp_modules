
#include "ClapTrap.hpp"

#ifndef SCAV_TRAP_HPP
#define SCAV_TRAP_HPP

#include <iostream>

class ScavTrap: public ClapTrap
{
public:
    ScavTrap();
    ScavTrap(const std::string& name);
    ~ScavTrap();
        
    ScavTrap(const ScavTrap& copy);
    ScavTrap& operator=(const ScavTrap& assign);

    
    void    attack(const std::string& target);
    void    guardGate(void) const;
};

#endif