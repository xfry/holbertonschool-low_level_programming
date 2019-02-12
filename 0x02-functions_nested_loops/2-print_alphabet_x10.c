#include "holberton.h"
/**
 * print_alphabet_x10 - a function to print 10times the alphabet
 *
 * holberton.h: a header that contains all functions prototypes
 * Return: void
 */
void print_alphabet_x10(void)
{
	char letter = 'a';
	int i = 0;

	for (i = 0; i < 10; i++)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
			_putchar(letter);

		_putchar('\n');
	}
}
