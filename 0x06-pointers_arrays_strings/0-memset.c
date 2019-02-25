#include "holberton.h"
/**
 * _memset - fills memory with a constant byte
 * @s: a char pointer param
 * @b: a char variable param
 * @n: a char variable param
 *
 * description: fills memory with a constant byte
 * Return: char pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(s + i) = b;
		i++;
	}

	return (s);
}
