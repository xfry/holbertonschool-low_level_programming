#include <stdlib.h>
#include "lists.h"
/**
 * free_dlistint - a function to free a double linked list.
 * @head: a pointer to the head of the list.
 *
 * Description: this is a function to free memory used by a
 * doubly linked list.
 * Return: void.
 */
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
