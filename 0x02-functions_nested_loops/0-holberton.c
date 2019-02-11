#include "holberton.h"
#include "unistd.h"
/**
 * print_message - print the string holberton
 * @text: store the text to print
 *
 * holberton.h - header with function prototypes
 * Return: void
 */
void print_message(char *text)
{
	write(1, text, sizeof(text) + 2);
}

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	print_message("Holberton\n");
	return (0);
}
