
#ifndef LIST_HPP
#define LIST_HPP

#include "AMateria.hpp"

class AMateria;
class Icharacter;

class Node
{
public:
	AMateria *amateria;
	Node* next;

	Node(AMateria *amateria);
};

class List 
{
public:
	Node *node;
	Node *last;
	List(void);
	void	add(AMateria *amateria);
	~List();
};
#endif