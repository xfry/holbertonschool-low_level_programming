#include<stdlib.h>
#include "lists.h"
/**
 * get_nodeint_at_index - a function to get a node at specific index
 * @head: a pointer to the head of the list
 * @index: The index of the node you want to retrieve
 *
 * Return: a listint_t node at requested index
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *aux;
	unsigned int counter = 0;

	if (head)
	{
		aux = head;
		while (aux)
		{
			counter++;
			aux = aux->next;
			head = aux;
			if (counter == index)
				break;
		}
	}

	return (head);
}
