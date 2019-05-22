#include<stdio.h>
#include<stdlib.h>
#include "lists.h"

/**
 * free_list - A function to free memory blocks
 *@list: a parameter to receive the head of the list
 *
 *Description: this function receive a list head and
 *go through until it found the las NULL node to finish.
 *Return: void or nothing.
 */
void free_list(list_t *list)
{
	int len = 0;
	list_t *aux = list;
	list_t *next_node = NULL;

	while (aux)
	{
		if (aux->next)
		{
			next_node = aux->next;
			len++;
			free(aux->str);
			free(aux);
			aux = next_node;
		}
		else
		{
			free(aux->str);
			free(aux);
			aux = NULL;
		}
	}
}
