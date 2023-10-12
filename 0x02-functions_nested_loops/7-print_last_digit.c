#include "main.h"

/**
 * print_last_digit - Does as name.
 * @n: int to be calculaed.
 *
 * Description: returns the last digit of an int.
 * Return: last digit on n.
 */
int print_last_digit(int n)
{
	short int lastDigit;

	lastDigit = n % 10;
	if (lastDigit < 0)
	{
		short int new;

		new = lastDigit * (-1);
		_putchar('0' + new);
	}
	else
	{
		_putchar('0' + lastDigit);
	}
	return (lastDigit);
}
