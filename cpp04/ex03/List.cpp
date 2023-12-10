
#include "List.hpp"

Node::Node(AMateria *amateria):amateria(amateria), next(NULL){}

List::List(void):node(NULL), last(NULL){}

void	List::add(AMateria *amateria)
{
	if (!this->node)
	{
		node = new Node(amateria);
		last = node;
	}
	else
	{
		Node *n = node;
		while (n)
		{
			if (n->amateria == amateria)
				return ;
			n = n->next;
		}
		Node *newNode = new Node(amateria);
		last->next = newNode;
		last = newNode;
	}
}

List::~List()
{
	Node *n;

	
	while (node)
	{
		delete node->amateria;
		n = node->next;
		delete node;
		node = n;
	}
}