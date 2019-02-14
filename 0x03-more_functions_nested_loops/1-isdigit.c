#include "holberton.h"
/**
 * _isdigit - a fuction to evaluate digits
 * @number: an integer parameter
 *
 * description: a function to evaluate if a digit goes
 * from 0 to 9 digit.
 * Return: int value
 */
int _isdigit(int number)
{
	return (number > 47 && number < 58 ? 1 : 0);
}
