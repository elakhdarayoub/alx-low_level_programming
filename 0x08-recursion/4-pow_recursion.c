#include "main.h"

/**
 * _pow_recursion - Calculates the power.
 * @x: The base number.
 * @y: The power number.
 *
 * Description: Calculates the power of x to y.
 * Return: The result in int.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else if (y == 1)
		return (x);
	x *= _pow_recursion(x, --y);
	return (x);
}
