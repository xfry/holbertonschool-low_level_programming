#include "holberton.h"
#include <stdio.h>
/**
 * swap_int - a function to swap values between integers
 * @*a: an integer param
 * @*b: an integer param
 */
void swap_int(int *a, int *b)
{
	int number1 = *a;
	int number2 = *b;

	*a = number2;
	*b = number1;
}
