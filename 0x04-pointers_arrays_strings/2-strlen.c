#include "holberton.h"
/**
 * _strlen - A function that return string length
 * @s: a char pointer
 *
 * description: A function that returns a string length
 * Return: an integer value
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	return (len);
}
