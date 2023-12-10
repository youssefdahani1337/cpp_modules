


#ifndef DIAMOND_TRAP_HPP
#define DIAMOND_TRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap: public ScavTrap, public FragTrap
{
private:
	std::string name;

public:
	DiamondTrap();
	DiamondTrap(const std::string& name);
	~DiamondTrap();

	DiamondTrap(const DiamondTrap& copy);
	DiamondTrap& operator=(const DiamondTrap& assign);

	void attack(const std::string& target);
	void whoAmI(void) const;
};
#endif