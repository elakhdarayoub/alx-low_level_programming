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
	while (n >= 10)
		n /= 10;
	return (n);
}
