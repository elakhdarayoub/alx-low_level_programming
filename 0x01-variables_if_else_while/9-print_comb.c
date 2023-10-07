#include <stdio.h>

/**
 * main- entry point.
 *
 * Description: print [0-9] with ',', ' ', '$'.
 * Return: 0 at success.
 */
int main(void)
{
	unsigned short int i;

	for (i = 0; i < 10; i++)
	{
		putchar(48 + i);
		if (i != 9)
		{
			putchar(',');
			putchar(' ');
		}
		else
		{
			putchar('$');
		}
	}
	return (0);
}
