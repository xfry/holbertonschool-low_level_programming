#include "holberton.h"
/**
 * _islower - a function to check if a letter is lowercase
 * @c: a integer amount to check
 *
 * Return: 1 if it is a lowercase
 */
int _islower(int c)
{
	if (c > 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
