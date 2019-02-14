#include "holberton.h"
/**
 * _isupper - return 0 or 1
 * @character: a in character
 *
 * description: a function that return 0 or 1
 * if the character is uppercase
 * Return: int value about the character
 */
int _isupper(int character)
{
	return (character > 64 && character <= 90 ? 1 : 0);
}
