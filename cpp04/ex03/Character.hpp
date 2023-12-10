
#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include<iostream>
#include "ICharacter.hpp"
class AMateria;



class Character:public ICharacter
{
private:
	void		initInventory(void);

public:
	Character();
	Character(const std::string& name);
	Character(const Character& character);
	Character& operator=(const Character& Character);
	~Character();

	std::string const & getName() const;
	void equip(AMateria* m);
	void unequip(int idx);
	void use(int idx, ICharacter& target);
};

#endif