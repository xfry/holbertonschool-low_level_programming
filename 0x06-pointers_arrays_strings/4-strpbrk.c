#include "holberton.h"
#include <stdio.h>
/**
 * _strpbrk - a function to return a string from &x address
 * @s: a literal string pointer
 * @accept: a literal string pointer
 *
 * description: a function that return a string from &x address
 * if one of the character from accept is part of its substrings
 * Return: character pointer or address;
 */
char *_strpbrk(char *s, char *accept)
{
	int length_a = 0, length_b = 0;

	for (length_a = 0; s[length_a] != '\0'; length_a++)
	{
		for (length_b = 0; accept[length_b] != '\0'; length_b++)
		{
			if (s[length_a] == accept[length_b])
				return (&s[length_a]);
		}
	}

	return (0);
}
