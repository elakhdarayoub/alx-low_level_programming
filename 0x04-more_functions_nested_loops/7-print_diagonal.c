#include "main.h"

/**
 * print_diagonal - prints a diagonal of '\'.
 * @n: number of characters.
 *
 * Description: prints n of '\' and n-1 ' ' in diagonal shape.
 * Return: void.
 */
void print_diagonal(int n)
{
	short int i, j;

	if (n <= 0)
	{
		_putchar('\n');
	} else
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i; j++)
			{
				_putchar(' ');
			}
			_putchar('\\');

			/*printing new line only when we not on last line*/
			_putchar('\n');
		}
	}
}
