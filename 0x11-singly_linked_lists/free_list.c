#include<stdio.h>
#include<stdlib.h>

int free_list(list_t **);

int free_list(list_t **list)
{
	int len = 0;
	list_t *aux = *list;
	list_t *next_node = NULL;

	while(aux)
	{
		if(aux->next)
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
	return (len);
}
