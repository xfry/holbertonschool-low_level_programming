#include "holberton.h"
/**
 *_strchr - a function to search a character n in source s
 * @s: a source pointer
 * @c: a char parameter to look for
 *
 * description: this function looks for a character 'c' into a
 * literal string.
 * Return: if the character 'c' is found returns a character pointer else
 * send a char pointer
 */
char *_strchr(char *s, char c)
{
	unsigned int length = 0;
	char arr[] = {'0'};
	char *p = arr;

	while (s[length] != '\0')
	{
		if (s[length] == c)
		{
			arr[0] = c;
			return (p);
		}
		length++;
	}

	return 0;
}
