#include "main.h"

/**
 * _abs - Calculates the abs value of an int.
 * @n: The int to be calculated.
 *
 * Description: Calculates the absolute value of an integer.
 * Return: The absolute value of the integer passed.
 */
int _abs(int n)
{
	if (n < 0)
		return (n * (-1));
	else
		return (n);
}
