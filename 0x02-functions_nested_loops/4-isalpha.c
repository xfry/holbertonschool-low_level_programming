#include "holberton.h"
/**
 * _isalpha - a function that prints alphabetic letters
 * @c: int parameter
 *
 * Return: int value
 */
int _isalpha(int c)
{
	int r = 0;

	r = c >= 64 && c <= 122 ? 1 : 0;
	return (r);
}
