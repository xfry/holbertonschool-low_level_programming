#include "holberton.h"
#include <stdio.h>
/**
 *_strspn - a function to return the amount of bytes in a sbstring
 * @s: a pointer charged with literal information
 * @accept: a char pointer
 *
 * Return: a counter about the amount of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int counter = 0;
	int substring = 0, a_length;

	while (accept[a_length] != '\0')
		a_length++;
	a_length -= 1;
	while (s[substring] != ' ')
	{
		if (s[substring] == accept[a_length])
		{
			counter++;
		}
		substring++;
		a_length--;
	}
	return (counter + 1);
}
