#include<stdlib.h>
#include<stdio.h>
#include<stddef.h>
#include "lists.h"

/**
 * print_listint - a funciton to prints a linked list
 * @h: a pointer with a constant type
 *
 * Description: a function that can count the amount of nodes
 * inside a singly linked list and print his data
 * Return: size_t value aca (a unsigned int)
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *aux;
	size_t amount = 0;

	aux = h;
	while (aux)
	{
		amount++;
		printf("%d \n", aux->n);
		if (aux->next)
		{
			aux = aux->next;
		}
		else
		{
			aux = NULL;
		}
	}

	return (amount);
}
