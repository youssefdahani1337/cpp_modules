


#ifndef WRONG_ANIMAL_HPP
#define WRONG_ANIMAL_HPP

#include <iostream>

class WrongAnimal
{
protected:	
	std::string type;
public:
	WrongAnimal();
	WrongAnimal(const std::string& type);
	WrongAnimal(const WrongAnimal& copy);
	WrongAnimal& operator=(const WrongAnimal& assign);
	~WrongAnimal();

	void makeSound(void) const;
	void	setType(const std::string& type);
	std::string getType(void) const;
};

#endif
