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
	unsigned int counter = 0;
	int length_a = 0;
	int length_b = 0;

	for(length_a = 0; s[length_a] != ' '; length_a++)
	{
		for(length_b = 0; accept[length_b] != '\0'; length_b++)
		{
			if(s[length_a] == accept[length_b])
			{
				counter++;
			}
		}
	}

	return (counter);
}
