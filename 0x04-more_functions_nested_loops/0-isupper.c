#include "main.h"

/**
 * _isupper - checks char case type.
 * @c: The character to check.
 *
 * Description: the func checks if a character is upper case.
 * Return: 1 if c is upper, 0 otherwise.
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
