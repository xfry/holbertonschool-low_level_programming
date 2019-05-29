#include "lists.h"
#include<stdio.h>
/**
 * dlistint_len - A function to count the nodes inside a list.
 * @h: a pointer parameter to the head node of the list.
 *
 * Description: A function to count the amount of nodes inside a
 * doubly linked list.
 * Return: the amount of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *aux;
	size_t amount = 0;

	if (!h)
		return (amount);
	if (h)
		aux = h;
	while (aux)
	{
		aux = aux->next;
		amount++;
	}

	return (amount);
}
