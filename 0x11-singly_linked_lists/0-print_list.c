#include <stdio.h>
#include <stddef.h>
#include "lists.h"
/**
 * print_list - a function to print a list of nodes
 * @h: a const pointer parameter
 *
 * description: a function to print a list of elements for every node
 * into a singly linked list.
 * Return: size_t value
 */
size_t print_list(const list_t *h)
{
	unsigned int length = 0;

	while (h)
	{
		if (h->str != NULL)
		{
			printf("[%d] %s \n", h->len, h->str);
		}
		else
		{
			printf("[%d] %p \n", 0, h->str);
		}
		h = h->next;
		length++;
	}

	return (length);
}
