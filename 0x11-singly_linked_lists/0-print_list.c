#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include "lists.h"

size_t print_list(const list_t *h)
{
	size_t length;

	while(h)
	{
		if(h->str != NULL)
		{
			printf("[%d] %s \n", h->len, h->str);

		} else {
			printf("[%d] %p \n", 0 , (void *)h->str);
		}
		h = h->next;
		length++;
	}

	return length;
}
