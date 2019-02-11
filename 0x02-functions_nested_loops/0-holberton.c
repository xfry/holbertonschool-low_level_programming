#include "holberton.h"
#include "unistd.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
void print_message(char *text)
{
	write(1, text, sizeof(text)+2);
}

int main (void)
{
	print_message("Holberton\n");
	return (0);
}
