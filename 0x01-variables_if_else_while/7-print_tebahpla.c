#include <stdio.h>

/**
 * main - entry point.
 *
 * Description: prints the alphabet in reverse order.
 * Return: zero at success.
 */
int main(void)
{
	char c;

	c = 'z';
	while (c >= 'a')
	{
		putchar(c);
		c--;
	}
	putchar('\n');
	return (0);
}
