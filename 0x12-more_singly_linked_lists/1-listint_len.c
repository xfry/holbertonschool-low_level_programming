#include "lists.h"
/**
 * listint_len - a function to count the nodes of a list
 * @h: a pointer to the head of the list
 *
 * Return: a unsigned int with the amount of nodes
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *aux;
	unsigned int counter = 0;

	aux = h;
	while (aux)
	{
		counter++;
		if (aux->next)
			aux = aux->next;
		else
		{
			aux = NULL;
		}
	}
	return (counter);
}
