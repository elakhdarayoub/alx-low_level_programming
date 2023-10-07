#include <stdio.h>

/**
 * main - entry point
 *
 * Descrition: prints all base16 (Hexadicimal).
 * Return: zero at success.
 */
int main(void)
{
	char c;
	unsigned short int h;

	c = 'a';
	for (h = 0; h < 10; h++)
	{
		putchar(48 + h);
	}
	while (c <= 'f')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
