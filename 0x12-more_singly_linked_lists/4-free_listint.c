#include<stdlib.h>
#include "lists.h"
/**
 * free_listint - a function to delete free memory used by list
 * @head: the list head to free.
 *
 * Description: Iterate through a list and free every node's memory
 * Return: void.
 */
void free_listint(listint_t *head)
{
	listint_t *next_node = NULL;
	listint_t *aux = NULL;

	aux = head;
	while (aux)
	{
		if (aux->next)
		{
			next_node = aux->next;
			free(aux);
			aux = next_node;
		}
		else
		{
			free(aux);
			aux = NULL;
		}
	}
}
