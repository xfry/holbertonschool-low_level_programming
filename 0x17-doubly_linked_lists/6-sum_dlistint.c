#include "lists.h"

/**
 * sum_dlistint - a function to sum the data of every node
 * @head: a pointer to the head of the list.
 *
 * Description: A function to sum all the data of every node.
 * Return: 0 if the head node is empty, otherwise sum.
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *aux = head;
	int sum = 0;

	if (!head)
		return (0);

	while (aux)
	{
		sum += aux->n;
		aux = aux->next;
	}

	return (sum);
}
