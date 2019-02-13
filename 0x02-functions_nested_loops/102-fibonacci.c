#include "holberton.h"
#include "stdio.h"
/**
 * fibonacci - function to calc fibonacci
 *
 * description: shows the first 50 numbers of fibonacci
 * succession
 * Return: void
 */
void fibonacci(void)
{
	int i = 1;

	long int n1 = 0, n2 = 1, aux = 0;

	while (i <= 50)
	{
		aux = n1 + n2;
		printf("%li", aux);
		printf(", ");
		n1 = n2;
		n2 = aux;
		i++;
	}
}
/**
 * main - Entry point.
 *
 * description: the main function to run program.
 * Return: Always 0
 */
int main(void)
{
	fibonacci();
	return (0);
}
