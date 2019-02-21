#include "holberton.h"
#include <unistd.h>
/**
 * _puts - print a string
 * @str: a char pointer param
 *
 * description: a function that prints an string
 * Return: void
 */
void _puts(char *str)
{
	int len = 0;

	while (str[len] != '\0')
	{
		write(1, &str[len], 1);
		len++;
	}
	write(1, "\n", 1);
}
