#include "holberton.h"
#include <stdlib.h>
/**
 * create_array - a function to create a array of characters
 * @size: unsigned int, the size of the array
 * @c: char, a character to set into the array
 *
 * description: a function to create an array of characters using malloc
 * Return: a pointer to the array created in the block of memory set by malloc.
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i = 0;

	arr = malloc(sizeof(*arr) * size);
	if (arr != NULL)
	{
		for (i = 0; i < size; i++)
			arr[i] = c;
	}
	else
	{
		return (NULL);
	}

	return (arr);
}
