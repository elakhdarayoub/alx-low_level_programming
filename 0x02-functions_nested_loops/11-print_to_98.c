#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - Prints from n to 98.
 * @n: The number to start printing from.
 *
 * Description: Prints from n to 98.
 * Return: void.
 */
void print_to_98(int n)
{
	short int i;

	if (n > 98)
	{
		for (i = n; i >= 98; i--)
		{

			if (i == 98)
				printf("%d ", i);
			else
				printf("%d, ", i);
		}
	}
	else
	{

		for (i = n; i <= 98; i++)
		{
			if (i == 98)
				printf("%d ", i);
			else
				printf("%d, ", i);
		}
	}
	putchar('\n');
}
