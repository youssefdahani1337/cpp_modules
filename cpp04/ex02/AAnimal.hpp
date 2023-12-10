
#ifndef A_ANIMAL_HPP
#define A_ANIMAL_HPP
#include <iostream>

class AAnimal
{
protected:
	std::string type;
public:
	AAnimal();
	AAnimal(const std::string& type);
	AAnimal(const AAnimal& copy);
	AAnimal& operator=(const AAnimal& assign);
	virtual ~AAnimal();
	
	std::string getType(void) const;
	void	setType(const std::string& type);
	virtual void	makeSound(void) const = 0;
};

#endif 
