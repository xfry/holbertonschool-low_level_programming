#include<stdio.h>
#include<stdlib.h>
#include "lists.h"
/**
 * add_nodeint - a function to add a new node at the begining of head
 * @head: a double pointer to head
 * @n: a constant value to be set as node data.
 *
 * Description: This function set a new head and
 * put the old head into the next node.
 * Return: a pointer to the new head.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_head = NULL;

	new_head = malloc(sizeof(listint_t));
	if (!new_head)
		return (NULL);
	new_head->n = n;
	new_head->next = *head;
	*head = new_head;

	return (*head);
}
