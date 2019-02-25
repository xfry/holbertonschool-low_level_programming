#include <stdio.h>
#include "holberton.h"
/**
 * print_array - a function to print an array list of integers
 * @a: an integer pointer (array decays)
 * @n: an integer variable
 *
 * description: a function to print a list of array with commas
 * return: void, nothing
 */
void print_array(int *a, int n)
{
	int i = 0;

	for (; i < n; i++)
	{
		if (i == n - 1)
			printf("%d", a[i]);
		else
			printf("%d, ", a[i]);
	}
	printf("\n");
}
