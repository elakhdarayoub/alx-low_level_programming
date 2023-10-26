#include "main.h"

/**
 * _sqrt_recursion - Finds the square root of a natural number.
 * @n: The natural number.
 *
 * Description: Finds the square root of a natural number.
 * Return: The square root.
 */
int _sqrt_recursion(int n)
{
	if (n == 1)
		return (1);
	else if (n == 0)
		return (0);
	else if (n < 0)
		return (-1);

}
