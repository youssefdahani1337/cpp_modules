#include "Character.hpp"

void Character::initInventory(void)
{
	for (int i = 0; i < 4; i++)
		this->inventory[i] = NULL;
}
Character::Character()
{
	initInventory();	
	this->list = new List();
}
Character::Character(const std::string& name)
{
	initInventory();
	this->list = new List();
	this->name = name;
}

Character::Character(const Character& ch)
{
	this->list = new List();
	initInventory();
	for (int i = 0; i < 4 ; i++)
	{
		if (ch.inventory[i])
		{
			inventory[i] = ch.inventory[i]->clone();
			list->add(inventory[i]);
		}
	}
}

Character& Character::operator=(const Character& ch)
{
	initInventory();
	for (int i = 0; i < 4 ; i++)
	{
		if (ch.inventory[i])
		{
			inventory[i] = ch.inventory[i]->clone();
			list->add(inventory[i]);
		}
	}
	return (*this);
}

std::string const & Character::getName(void) const { return (this->name);}

void Character::equip(AMateria* m)
{
	if (!m)
		return ;
	for (size_t i = 0; i < 4; i++)
	{
		if (!this->inventory[i])
		{
			this->inventory[i] = m;
			break ;
		}	
	}
	list->add(m);
}


void Character::unequip(int idx)
{
	if (idx >= 0 && idx < 4 && inventory[idx])
		this->inventory[idx] = NULL;
}

void Character::use(int idx, ICharacter& target)
{
	if (idx >= 0 && idx < 4)
	{
		if (inventory[idx])
			inventory[idx]->use(target);
	}
}

Character::~Character() 
{
	delete list;
}