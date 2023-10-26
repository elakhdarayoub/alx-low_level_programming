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
	int n = 0;
	char *copy = s;

	if (*copy == '\0')
		return (n);
	n++;
	n += _strlen_recursion(copy++);
}
