
#include <cstdlib>
#include <iostream>
#include "Brain.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include"WrongAnimal.hpp"
#include"WrongCat.hpp"

int main()
{
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	delete j;//should not create a leak
	delete i;

	std::cout << "----------------------------" << std::endl;

	const Animal* animals[100];
	for (size_t i = 0; i < 50; i++)
	{
		animals[i] = new Dog();
		animals[i + 50] = new Cat();
	}
	
	for (size_t i = 0; i < 50; i++)
	{
		delete animals[i];
		delete animals[i + 50];
	}
	return 0;
}