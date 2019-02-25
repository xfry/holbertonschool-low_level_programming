#include "holberton.h"
/**
 * puts2 - a function to prints odd characters
 * @str: a char pointer param
 *
 * description: a function that prints letters from first
 * out of 2 of a string.
 * return: void, nothing
 */
void puts2(char *str)
{
	int length = 0;

	do {
		if (length == 0)
			_putchar(str[length]);
		else if (length % 2 == 0)
			_putchar(str[length]);
		length++;
	} while (str[length] != '\0' && length > 0);
	_putchar('\n');
}
