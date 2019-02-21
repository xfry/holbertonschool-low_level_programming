#include <stdio.h>
#include "_putchar.c"
/**
 * print_rev - a function to reverse an string
 * @s: a char pointer parameter
 *
 * description: a function to reverse a string
 * Return: void
 */
void print_rev(char *s)
{
	int length = 0;

	while (s[length] != '\0')
	{
		_putchar(s[length]);
		length++;
	}
	_putchar('\n');
	while (length > -1)
	{
		_putchar(s[length]);
		length--;
	}
	_putchar('\n');
}
