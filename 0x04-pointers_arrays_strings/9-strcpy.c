#include "holberton.h"
/**
 * _strcpy: a function to copy one string source to dest
 * @dest: the char pointer to copy the content
 * @src: the text content to be copied to dest
 *
 * description: a function to copy the content of one string of char to
 * a pointer.
 * return: a char pointer with all the content of source.
 */
char *_strcpy(char *dest, char *src)
{
	int count = 0;

	for (; src[count] != '\0'; count++)
		dest[count] = src[count];

	dest[count + 1] = '\0';

	return (dest);
}
