

#include "MateriaSource.hpp"

void MateriaSource::initInventory()
{
	for (int i = 0; i < 4; i++)
		this->inventory[i] = NULL;
}

MateriaSource::MateriaSource()
{
	count = 0;
	initInventory();
}

MateriaSource::MateriaSource(const MateriaSource& materia)
{
	initInventory();
	count = materia.count;
	for (int i = 0; i < 4 ; i++)
	{
		if (materia.inventory[i])
			inventory[i] = materia.inventory[i]->clone();
	}
}

MateriaSource& MateriaSource::operator=(const MateriaSource& materia)
{
	initInventory();
	count = materia.count;
	for (int i = 0; i < 4 ; i++)
	{
		delete this->inventory[i];
		if (materia.inventory[i])
			inventory[i] = materia.inventory[i]->clone();
	}
	return (*this);
}

void	MateriaSource::learnMateria(AMateria *materia)
{
	if (materia && count <= 4)
		inventory[count ++] = materia;
	else
	{
		delete materia;
		std::cout << "Invalid Amateria source" << std::endl;
	}
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < count; i++)
	{
		if (this->inventory[i] && this->inventory[i]->getType() == type)
			return(this->inventory[i]->clone());
	}
	return (NULL);
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
		delete inventory[i];
}
