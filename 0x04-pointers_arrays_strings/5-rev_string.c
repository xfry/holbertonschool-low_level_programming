#include "holberton.h"

void rev_string(char *s)
{
	int length = 0, total_length = 0;
	int new_length = 0;
	char temp;

	while(s[length] != '\0')
		length++;
	length -= 1;
	total_length = length;
	while(length > total_length*0.5)
	{
		temp = s[new_length];
		s[new_length] = s[length];
		s[length] = temp;
		length--;
		new_length++;
	}
}
