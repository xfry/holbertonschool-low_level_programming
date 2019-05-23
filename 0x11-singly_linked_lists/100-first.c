#include<stdio.h>
#include<stdlib.h>

void before(void) __attribute__ ((constructor));
void after(void) __attribute__ ((constructor));

/**
 * before - A function to excecute before main
 * Return: void
 */
void before(void)
{
	printf("You're beat! and yet, you must allow,\n");
}

/**
 * after - A function to excecute after before
 * Return: void
 */
void after(void)
{
	printf("I bore my house upon my back!\n");
}
