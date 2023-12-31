#include "main.h"

/**
 * more_numbers - Prints from 0 to 10, 10 times.
 *
 * Description: Prints from 0 to 10, ten times.
 * Return: void.
 */
void more_numbers(void)
{
	short int i, j, n;

	/* number of lines */
	for (i = 0; i < 10; i++)
	{
		/* printing the digits */
		for (j = 0; j < 15; j++)
		{
			n = j;
			if (j > 9)
			{
				_putchar(1 + 48);
				n = j % 10;
			}
			_putchar(n + 48);
		}

		/* printing a new line after each row */
		_putchar('\n');
	}
}
