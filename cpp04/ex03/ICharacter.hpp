

#ifndef ICHARACTER_HPP
#define ICHARACTER_HPP

#include<iostream>

#include "AMateria.hpp"
#include "List.hpp"

class AMateria;
class List;
class ICharacter
{
	protected:
		AMateria* 	inventory[4];
		List		*list;
		 std::string name;

	public:
		virtual std::string const & getName() const = 0;
		virtual void equip(AMateria* m) = 0;
		virtual void unequip(int idx) = 0;
		virtual void use(int idx, ICharacter& target) = 0;
		virtual ~ICharacter(){}

};
#endif