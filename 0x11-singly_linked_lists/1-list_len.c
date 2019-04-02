#include <stddef.h>
#include <stdio.h>
#include "lists.h"
/**
 * list_len - a program to count the next element in list.
 * @h: a const pointer to the head of a list.
 *
 * Return: a unsigned int parameter using size_t
 */
size_t list_len(const list_t *h)
{
	unsigned long int length;

	while (h != NULL)
	{
		h = h->next;
		length++;
	}

	return (length);
}
