#include "holberton.h"
#include "unistd.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main (void)
{
	char *text = "Holberton\n";
	write(1, text, sizeof(text)+1);
	return (0);
}
