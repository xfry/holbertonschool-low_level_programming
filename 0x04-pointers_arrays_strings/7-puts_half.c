#include "holberton.h"
/**
 * puts_half - a function to print a string from half in forward
 * @str: a char pointer parameter
 *
 * description: a function to print a string if the total amount of
 * characters is odd, then shows half in forward
 * return: void, nothing
 */
void puts_half(char *str)
{
	int length = 0, n = 0;

	while (str[length] != '\0')
		length++;

	n = (length - 1) *0.5;
	while (length % 2 == 0 && str[n] != '\0')
	{
		n++;
		_putchar(str[n]);
	}
	_putchar('\n');
}
