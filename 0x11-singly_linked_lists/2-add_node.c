#include <stdlib.h>
#include <stddef.h>
#include "lists.h"
#include <stdio.h>
#include <string.h>
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
	aux->len = strlen(str);
	aux->next = *head;
	*head = aux;

	return (*head);
}
