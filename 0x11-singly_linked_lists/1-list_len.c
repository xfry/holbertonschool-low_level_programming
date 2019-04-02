#include <stddef.h>
#include <stdio.h>
#include "lists.h"

size_t list_len(const list_t *h)
{
	unsigned long int length;

	while(h != NULL)
	{
		h = h->next;
		length++;
	}

	return (length);
}
