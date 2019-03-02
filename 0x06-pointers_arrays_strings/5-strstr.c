#include "holberton.h"
/**
 *_strstr - a function to find the a string character into another
 * @haystack: a pointer to literal string
 * @needle: a pointer to literal string
 *
 * description: a function to find the a string character into another
 * and return the substrig that match the character
 * Return: a char character.
 */
char *_strstr(char *haystack, char *needle)
{
	int length_a = 0, length_b = 0;

	for (length_a = 0; needle[length_a] != '\0'; length_a++)
	{
		for (length_b = 0; haystack[length_b] != '\0'; length_b++)
		{
			if (needle[length_a] == haystack[length_b])
			{
				return (&haystack[length_b]);
			}
		}

	}

	return (0);
}
