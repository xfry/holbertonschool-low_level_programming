#include "lists.h"
/**
 * get_dnodeint_at_index - a function to get the nth node.
 * @head: the head of the doubly list.
 * @index: the nth index we want to get.
 *
 * Description: a function to get the nth node of a doubly linked list
 * Return: it can return the nth node or null if it's out of range
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *aux = head;
	unsigned int counter = 0;

	while (counter < index)
	{
		if (aux->next)
		{
			aux = aux->next;
		}
		else
		{
			return (aux);
		}
		counter ++;
	}

	return (NULL);
}
