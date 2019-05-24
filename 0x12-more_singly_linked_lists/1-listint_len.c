#include "lists.h"

size_t listint_len(const listint_t *h)
{
	const listint_t *aux;
	unsigned int counter = 0;
	aux = h;
	while(aux)
	{
		counter++;
		if(aux->next)
			aux = aux->next;
		else
		{
			aux = NULL;
		}
	}
	return counter;
}
