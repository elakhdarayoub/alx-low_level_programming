#include "main.h"

/**
 * _strlen_recursion - Prints the length of a string.
 * @s: The string.
 *
 * Description: Prints the length of a string.
 * Return: length of string.
 */
int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s > '\0')
		len += _strlen_recursion(s++) + 1;
	return (len);
}
