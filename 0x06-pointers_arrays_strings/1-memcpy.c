#include "holberton.h"
/**
 * _memcpy - a function to copy a memory area
 * @dest: a char pointer to store values from s[n]
 * @src: a char pointer
 * @n: the unsigned integer bound of area to copy
 *
 * description: a function to copy a memory area into one dest
 * Return: char pointer.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}
