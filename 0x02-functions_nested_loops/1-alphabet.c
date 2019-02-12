#include "holberton.h"
#include "_putchar.c"
/**
 * generate_alphabet - a loop to generate a-z text
 *
 * description: this function generate the alphabet
 * Return: void
 */
void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar (letter);

}
/**
 *main - Entry point
 *
 *Return: Always 0
 */
int main(void)
{
	print_alphabet();
	return (0);
}
