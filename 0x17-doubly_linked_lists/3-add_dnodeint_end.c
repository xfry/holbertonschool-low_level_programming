#include "lists.h"
#include <stdlib.h>
/**
 * add_dnodeint_end - a function to add a node to the end of a list
 * @head: a double pointer parameter to the dblist head
 * @n: a constant data value for list node
 *
 * description: a function to add a node to the end of the list
 * Return: a pointer. the head of the list
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *aux = NULL;
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);
	new_node->next = NULL;
	new_node->prev = NULL;
	new_node->n = n;

	if (!*head)
	{
		*head = new_node;
		return (*head);
	}
	aux = *head;
	while (aux)
	{
		if (!aux->next)
		{
			aux->next = new_node;
			break;
		}
		aux = aux->next;
	}

	return (*head);
}
