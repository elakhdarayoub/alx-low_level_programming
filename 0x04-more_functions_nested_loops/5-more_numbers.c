#include "main.h"

/**
 * more_numbers - Prints from 0 to 10, 10 times.
 *
 * Description: Prints from 0 to 10, ten times.
 * Return: void.
 */
void more_numbers(void)
{
	short int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 15; j++)
		{
			if (j > 9)
				_putchar('1' + (j % 10));
			_putchar('0' + j);
		}
		_putchar('\n');
	}
}
