#include "main.h"

/**
 * print_most_numbers - Prints from 0 to 9 but 2 and 4.
 *
 * Description: Prints from 0 to 9 but 2 and 4.
 * Return: void.
 */
void print_most_numbers(void)
{
	short int i;

	for (i = 0; i < 10; i++)
	{
		if (i == 2 || i == 4)
			continue;
		_putchar(48 + i);
	}
	_putchar('\n');
}
