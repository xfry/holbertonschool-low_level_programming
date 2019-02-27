#include "holberton.h"
#include <stdio.h>

unsigned int _strspn(char *s, char *accept)
{
	unsigned int counter = 0;
	int substring = 0, a_length;

	while(accept[a_length] != '\0')
		a_length++;
	a_length -= 1;
	while (s[substring] != ' ')
	{
		printf("s: %c\n", s[substring]);
		if(s[substring] == accept[a_length])
		{
			counter++;
			printf("ac: %c\n", accept[a_length]);
		}
		substring++;
		a_length--;
	}
	return counter+2;
}
