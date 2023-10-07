#include <stdio.h>

/**
 * main - entry point
 *
 * Description: prints combo of possible digits upto 100
 * where the first digit of the combo should always be smaller
 * than the second one.
 * Return: zero at success.
 */
int main(void)
{
	unsigned short int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (i > j || i == j)
				continue;

			putchar(48 + i);
			putchar(48 + j);

			if (i != 8)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
