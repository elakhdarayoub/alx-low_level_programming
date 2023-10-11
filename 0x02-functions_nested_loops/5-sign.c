#include "main.h"

/**
 * print_sign - Prints the sign of an int.
 * @n: The int to check its sign.
 *
 * Description: Checks the sign of an int and prints it.
 * Return: 1 if n is +, 0 if n is 0, or -1 if n is negative.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
}
