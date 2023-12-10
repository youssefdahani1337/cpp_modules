
#ifndef WRONG_CAT_HPP
#define WRONG_CAT_HPP
#include <iostream>

#include "WrongAnimal.hpp"

class WrongCat:public WrongAnimal
{
public:
	WrongCat();
	WrongCat(const WrongCat& copy);
	WrongCat& operator= (const WrongCat& assign);
	~WrongCat();

	void makeSound(void) const;
};

#endif
