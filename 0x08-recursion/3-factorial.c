#include "main.h"

/**
 * factorial - Prints the factorial of a given number.
 * @n: The number.
 *
 * Description: Prints the factorial of a given number.
 * Return: int.
 */
int factorial(int n)
{
	if (n == 0)
		return (1);
	else if (n < 0)
		return (-1);
	return (n * factorial(n - 1));
}
