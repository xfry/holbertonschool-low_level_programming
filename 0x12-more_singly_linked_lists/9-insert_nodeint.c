#include<stdlib.h>
#include "lists.h"
/**
 * list_len - a program to count the next element in list.
 * @h: a const pointer to the head of a list.
 *
 * Return: a unsigned int parameter using size_t
 */
size_t list_len(const listint_t *h)
{
	unsigned long int length = 0;

	while (h != NULL)
	{
		h = h->next;
		length++;
	}

	return (length);
}

/**
 * insert_nodeint_at_index - a function to inser node at asked index
 * @head: a double pointer to the head of the list
 * @idx: the index to look for
 * @n: the data for the new node to insert in list
 *
 * description: a function to add new nodes at requested index
 * Return: the inserted node or NULL if something fails.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *aux;
	listint_t *new_node;
	listint_t *next_node;
	unsigned int counter = 0;

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;

	if (*head)
	{
		if (idx > list_len(*head))
			return (NULL);
		aux = *head;
		if (idx == 0)
		{
			next_node = aux->next;
			new_node->next = next_node;
			*head = new_node;
		}
		while (aux->next)
		{
			counter++;
			next_node = aux->next;
			if (counter == idx)
			{
				new_node->next = next_node;
				aux->next = new_node;
				return (new_node);
			}
			aux = next_node;
		}
	}

	return (NULL);
}
