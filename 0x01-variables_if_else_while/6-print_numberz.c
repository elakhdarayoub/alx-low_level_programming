#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints nums [0-9] followed by new line.
 * Return: zero at success.
 */
int main(void)
{
	unsigned short int i;

	for (i = 0; i < 10; i++)
		putchar(48 + i);
	putchar('\n');
	return (0);
}
