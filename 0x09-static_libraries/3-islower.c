#include "main.h"

/**
 * _islower - checks char case type.
 * @c: The character to check.
 *
 * Description: the func checks if a character is upper or lower case.
 * Return: 1 if c is lower, 0 otherwise.
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
