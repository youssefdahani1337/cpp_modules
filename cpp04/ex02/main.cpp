
#include <iostream>
#include <cstdlib>
#include "Brain.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include"WrongAnimal.hpp"
#include"WrongCat.hpp"

int main()
{
	const AAnimal* j = new Dog();
	const AAnimal* i = new Cat();

	i->makeSound();
	j->makeSound();

	delete j;
	delete i;
 
	
	return 0;
}