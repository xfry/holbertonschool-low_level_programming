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
 *
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *next_node;
	listint_t *temp;
	listint_t *prev_node;
	unsigned int counter = 0;

	if(*head)
	{
		if(index > list_len(*head))
			return (-1);
		temp = *head;
		while(temp->next)
		{
			counter++;
			next_node = temp->next;
			prev_node = temp;
			if(counter == index)
			{
				temp = next_node->next;
				free(next_node);
				prev_node->next = temp;
				temp = prev_node;
				return (1);
			}
			temp = next_node;
		}
	}

	return (-1);
}
