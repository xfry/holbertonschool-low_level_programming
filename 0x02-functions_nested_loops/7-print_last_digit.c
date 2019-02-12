#include "holberton.h"
/**
 * print_last_digit - print the last digit of a number
 * @n: int number
 *
 * description: a function that prints positive last digit
 * Return: return value
 */
int print_last_digit(int n)
{
	n = n < 0 ? ((-1) * (n)) % 10 : n % 10;
	return (n);
}
