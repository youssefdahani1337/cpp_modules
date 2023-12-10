

#ifndef CAT_HPP
#define CAT_HPP
#include<iostream>
#include "Brain.hpp"
#include "AAnimal.hpp"

class Cat: public AAnimal
{
private:
	Brain* brain;
public:
	Cat();
	Cat(const Cat& copy);
	Cat& operator=(const Cat& assign);
	~Cat();

	void	makeSound(void) const;
};

#endif
