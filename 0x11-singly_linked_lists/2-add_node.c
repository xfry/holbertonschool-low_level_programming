#include <stdlib.h>
#include <stddef.h>
#include "lists.h"
#include <stdio.h>
#include <string.h>

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
 * add_node - A function to add a node into a list.
 * @head: a double pointer to receive the address of head
 * @str: a string pointer
 *
 * Description: A function to add a node before the head of a list
 * Return: The header pointer
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *aux = NULL;

	aux = malloc(sizeof(list_t));
	if (aux == NULL)
		return (NULL);

	aux->str = strdup(str);
	aux->len = _strlen(str);
	aux->next = *head;
	*head = aux;

	return (*head);
}
