#include<stdlib.h>
#include "lists.h"

void free_listint2(listint_t **head)
{
	listint_t *aux = *head;
	while(aux->next)
	{
		aux = aux->next;
		free(*head);
		*head = aux;
	}
	if(*head)
		free(*head);
	*head = NULL;
}
