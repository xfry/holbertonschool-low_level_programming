#include <stdlib.h>
#include <stddef.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * _strlen - A function that return string length
 * @s: a char pointer
 *
 * description: A function that returns a string length
 * Return: an integer value
 */
int _strlen(const char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	return (len);
}

/**
 * add_node_end - a function to add a node at the end of a list
 * @head: a double pointer to the head of a list.
 * @str: a string received as the data for a list element
 *
 * Description: A function to add a new element at the end of a
 * list.
 * Return: the address of a pointer.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *aux = NULL;
	list_t *new_node = NULL;

	if (*head == NULL)
	{
		*head  = malloc(sizeof(list_t));
		if (head == NULL)
			return (NULL);
		(*head)->str = strdup(str);
		(*head)->len = _strlen(str);
		(*head)->next = NULL;
	}
	else
	{
		aux = *head;
		while (aux)
		{
			if (aux->next)
			{
				aux = aux->next;
			}
			else
			{
				new_node = malloc(sizeof(list_t));
				if (new_node == NULL)
					return (NULL);
				new_node->str = strdup(str);
				new_node->len = _strlen(str);
				new_node->next = NULL;
				aux->next = new_node;
				break;
			}
		}
	}
	return (*head);
}
