#include "main.h"

/**
 * _puts - prints a string.
 * @str: The string to be printed.
 *
 * Description: Prints a string to the stdout.
 * Return: void.
 */
void _puts(char *str)
{
	short int i;

	i = 0;
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
