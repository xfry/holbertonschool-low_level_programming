#include<stdlib.h>
#include<stdio.h>
#include<stddef.h>
#include "lists.h"

size_t print_listint(const listint_t *h)
{
	const listint_t *aux;
	size_t amount = 0;

	aux = h;
	while(aux)
	{
		amount++;
		printf("%d \n", aux->n);
		if(aux->next)
		{
			aux = aux->next;
		}
		else
		{
			aux = NULL;
		}
	}

	return (amount);
}
