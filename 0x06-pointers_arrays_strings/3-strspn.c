#include "holberton.h"
/**
 *_strspn - a function to return the amount of bytes in a sbstring
 * @s: a pointer charged with literal information
 * @accept: a char pointer
 *
 * Return: a counter about the amount of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int counter = 0, length = 0;

	while(s[length] != ' ')
	{
		if(s[length] == accept[length])
		{
			counter++;
			length++;
		} else
		{
			break;
		}
	}

	return (counter);
}
