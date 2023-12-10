

#ifndef MATERIA_SOURCE_HPP
#define MATERIA_SOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource:public IMateriaSource
{
private:
	void 	initInventory();
public:
	MateriaSource();
	MateriaSource(const MateriaSource& materia);
	MateriaSource& operator=(const MateriaSource& materia);
	~MateriaSource();

	void		learnMateria(AMateria*) ;
	AMateria*	createMateria(std::string const & type) ;
};

#endif