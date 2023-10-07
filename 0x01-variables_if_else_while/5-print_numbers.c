#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints nums [0-9] followed by new line.
 * Return: zero at success.
 */
int main (void)
{
	short unsigned int i;

	for(i=0; i<10; i++)
		printf("%i", i);
	putchar('\n');
	return (0);
}
