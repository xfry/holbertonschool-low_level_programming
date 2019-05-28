#include "lists.h"
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *aux;
	size_t amount = 1;

	if(h)
	{
		aux = h;
		while(aux->next)
		{
			amount++;
			aux = aux->next;
		}
	}

	return (amount);
}
