#include <stdlib.h>
#include "lists.h"

void free_dlistint(dlistint_t *head)
{
	dlistint_t *aux = head;

	while (aux)
	{
		if (aux->next)
		{
			head = aux->next;
			free(aux);
			aux = aux->next;
		}
	}
}
