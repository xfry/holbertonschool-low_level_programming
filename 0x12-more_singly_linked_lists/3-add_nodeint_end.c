#include<stdlib.h>
#include "lists.h"
/**
 * add_nodeint_end - a function to add node at the end of the list
 * @head: a double pointer parameter
 * @n: a parameter to store the node data
 *
 * Description: a function to go through the list and add a new node
 * in the tail
 * Return: a pointer of the modified list.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *aux = NULL;
	listint_t *new_node = NULL;

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		aux = *head;
		while (aux)
		{
			if (aux->next)
			{
				aux = aux->next;
			}
			else
			{
				aux->next = new_node;
				break;
			}
		}
	}

	return (*head);
}
