#include "holberton.h"
#include <stdio.h>
/**
 * swap_int - a function to swap values between integers
 * @a: a pointer integer as param
 * @b: a pointer integer as param
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int value_of_a = *a;
	int value_of_b = *b;

	*a = value_of_b;
	*b = value_of_a;
}
