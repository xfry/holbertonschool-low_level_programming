#include "holberton.h"
/**
 * print_alphabet - a loop to generate a-z text
 *
 * description: this function generate the alphabet
 * Return: void
 */
void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar (letter);

	_putchar ('\n');
}
