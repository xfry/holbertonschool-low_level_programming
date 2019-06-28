#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
/**
 * add_dnodeint - A function to add new nodes to a list
 * @head: a pointer param with the head node
 * @n: a const param with the data for new node
 *
 * Description: A function to insert nodes at the prev node
of a doubly linked list.
* Return: the address of the new Element or NULL
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *aux;
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;

	if (!*head)
	{
		*head = new_node;
		return (*head);
	}

	aux = *head;
	while (aux)
	{
		if (!aux->prev)
		{
			aux->prev = new_node;
			aux->prev->next = *head;
			*head = aux->prev;
			break;
		}
		aux = aux->prev;
	}

	return (*head);
}
