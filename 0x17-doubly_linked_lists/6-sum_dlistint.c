#include "lists.h"

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *aux = head;
	int sum = 0;

	if(!head)
		return (0);

	while (aux)
	{
		sum += aux->n;
		aux = aux->next;
	}

	return (sum);
}
