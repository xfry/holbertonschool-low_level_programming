#include<stdio.h>
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

	if (index > list_len(head))
		return (NULL);
	if (head && (index <= list_len(head)))
	{
		if (index == 0)
			return (head);
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
