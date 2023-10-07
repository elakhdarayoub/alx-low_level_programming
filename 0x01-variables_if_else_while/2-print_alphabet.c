#include <stdio.h>

/**
 * main - entry point
 *
 * Description: print alphas
 * Return: 0 at success.
 */
int main(void)
{
	char c;

	c = 'a';
	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
