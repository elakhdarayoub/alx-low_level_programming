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

	/* for loop for '\' */
	for (i = 0; i < n; i++)
	{
		if (n <= 0)
			break;

		/*prints ' ' before '\'*/
		for (j = 0; j < n - 1; j++)
			_putchar(' ');

		/* prints '\' */
		_putchar('\\');
		_putchar('\n');
	}
}
