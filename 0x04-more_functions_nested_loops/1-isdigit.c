#include "main.h"

/**
 * _isdigit - checks c type.
 * @c: The value to check.
 *
 * Description: the func checks if a character is digite.
 * Return: 1 if c is digit, 0 otherwise.
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
