#include<stdio.h>
#include<stdlib.h>

void before(void) __attribute__ ((constructor));
void after(void) __attribute__ ((constructor));

/**
 * main - check the code for holberton school students.
 *
 * Return: always 0.
 */
int main(void)
{
	printf("(a tortoise, having pretty good sense of a hare's nature,"
	       " challenges one to a race.)\n");
	return (0);
}

/**
 * before - A function to excecute before main
 * Return: void
 */
void before(void)
{
	printf("you're beat! and yet, you must allow,\n");
}

/**
 * after - A function to excecute after before
 * Return: void
 */
void after(void)
{
	printf("I bore my house upon my back!\n");
}
