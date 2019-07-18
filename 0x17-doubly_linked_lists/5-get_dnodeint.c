#include <stdio.h>
#include "lists.h"

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *aux = head;
	unsigned int counter = 0;

	while(counter < index)
	{
		if(aux->next)
		{
			aux = aux->next;
		}
		else
		{
			return (aux);
		}
		counter ++;
	}

	return (aux);
}
