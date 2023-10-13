#include "main.h"

/**
 * print_line - print line in _
 * @n: the _ number
 *
 * Description: prints a straight line.
 * Return: void.
 */
void print_line(int n)
{
	short int i;

	i = 0;
	for (i = 0; i < n; i++)
	{
		if (n <= 0)
			break;
		_putchar('_');
	}
	_putchar('\n');
}
