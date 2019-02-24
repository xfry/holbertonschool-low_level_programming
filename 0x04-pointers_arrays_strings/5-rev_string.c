#include "holberton.h"
/**
 * rev_string - a function to reverse string
 * @s: a (array decay) pointer
 *
 * description: This function can reverse whatever string you write
 * Return: void, nothing to return.
 */
void rev_string(char *s)
{
	int length = 0, total_length = 0;
	int new_length = 0;
	char temp;

	while (s[length] != '\0')
		length++;

	total_length = (length -= 1);

	while (length > (total_length * 0.5))
	{
		temp = s[new_length];
		s[new_length] = s[length];
		s[length] = temp;
		length--;
		new_length++;
	}
}
