#include <stdio.h>
#include "main.h"

int main(void)
{
	int a, b, c;
	int larg;

	a = 972;
	b = -98;
	c = 0;

	larg = largest_number(a, b, c);

	printf("%d is the largest number\n", larg);
	return (0);
}
