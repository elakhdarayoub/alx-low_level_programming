#include "main.h"

/**
 * _puts_recursion - Prints a string.
 * @s: The string to print.
 *
 * Description: Prints a string followed by a newline.
 * Return: void.
 */
void _puts_recursion(char *s)
{
	char *copy;

	copy = s;
	if (*copy == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*copy);
	copy++;
	_puts_recursion(copy);
}
