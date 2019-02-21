#include "holberton.h"

void rev_string(char *s)
{
	int length = 0;
	int new_length = 0;
	char s2[10];

	while(s[length] != '\0')
	{
		s2[length] = s[length];
		length++;
	}
	length -= 1;
	while(length > -1)
	{
		s[new_length] = s2[length];
		new_length++;
		length--;
	}
}
