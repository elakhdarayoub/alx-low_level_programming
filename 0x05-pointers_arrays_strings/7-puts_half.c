#include "main.h"

/**
 * puts_half - Prints the second half of a string.
 * @str: The String to process.
 *
 * Description: Prints the second half of a string.
 * Return: void.
 */
void puts_half(char *str)
{
	short int i;

	for (i = 0; str[i] != '\0'; i++)
		;
	i++;
	for (i /= 2; str[i] != '\0'; i++)
		_putchar(str[i]);
	_putchar('\n');
}
