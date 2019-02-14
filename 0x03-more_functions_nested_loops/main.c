#include "stdio.h"
#include "0-isupper.c"
#include "1-isdigit.c"
#include "2-mul.c"

int main(void)
{
	printf("%d\n", mul(98, 1024));
	printf("%d\n", mul(-402, 4096));
	return (0);
}
