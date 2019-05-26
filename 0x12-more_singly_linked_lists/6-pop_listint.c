#include<stdio.h>
#include<stdlib.h>
#include "lists.h"
/**
 * pop_listint - a function to pop the head of a linked list
 * @head: a double pointer to the head of the list
 *
 * Description: a function to pop the head of a linked list
 * Return: an integer with the data of head before pop
 */
int pop_listint(listint_t **head)
{
	listint_t *aux;
	int n = 0;

	if (*head)
	{
		aux = *head;
		n = aux->n;
		aux = aux->next;
		free(*head);
		*head = aux;
	}

	return (n);
}
