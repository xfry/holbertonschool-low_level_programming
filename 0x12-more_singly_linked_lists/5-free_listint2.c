#include<stdlib.h>
#include "lists.h"

/**
 * free_listint2 - a function to free every node at a linked list
 * @head: is a double pointer to the head of the linked list.
 *
 * Description: A function to free memory used by a linked list
 * Return: none
 */
void free_listint2(listint_t **head)
{
	listint_t *aux = *head;

	if(*head)
	{
		while (aux->next)
		{
			aux = aux->next;
			free(*head);
			*head = aux;
		}
		free(*head);
		*head = NULL;
	}
}
