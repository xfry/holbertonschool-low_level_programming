#include <stdlib.h>
#include "lists.h"

void free_dlistint(dlistint_t *head)
{
	dlistint_t *aux = NULL;

	while (head)
	{
		aux = head;
		if (aux->next)
		{
			head = aux->next;
			free(aux);
		}
		else
		{
			free(aux);
			head = NULL;
		}
	}
}
