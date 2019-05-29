#include "lists.h"
#include<stdio.h>
/**
 * print_dlistint - A function to count the nodes inside a list.
 * @h: a pointer parameter to the head node of the list.
 *
 * Description: A function to count the amount of nodes inside a
 * doubly linked list.
 * Return: the amount of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *aux;
	size_t amount = 0;

	if (h)
	{
		aux = h;
		while (aux)
		{
			amount++;
			printf("%d\n", aux->n);
			aux = aux->next;
		}
	}

	return (amount);
}
