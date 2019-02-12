#include "holberton.h"
/**
 * print_sign a function that prints sign of a integer
 * @n: a integer number
 *
 * Return: integer value
 */
int print_sign(int n)
{
	char sign;
	int rvalue;

	if (n == 0)
	{
		_putchar('0');
		return (0);
	}

	sign = n > 0 ? '+' : '-';
	_putchar(sign);
	rvalue = n > 0 ? 1 : -1;
	return (rvalue);
}
