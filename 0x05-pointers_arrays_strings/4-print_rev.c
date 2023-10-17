#include "main.h"

/**
 * print_rev - Prints a string in reverse.
 * @s: A string.
 *
 * Description: Prints a string in reverse.
 * Return: void.
 */
void print_rev(char *s)
{
	short int len;

	len = 0;
	while (s[len] != '\0')
		len++;
	len--; /*removing the extra char that rep '\0'*/
	while (len >= 0)
	{
		_putchar(s[len]);
		len++;
	}
	_putchar('\n');
}
