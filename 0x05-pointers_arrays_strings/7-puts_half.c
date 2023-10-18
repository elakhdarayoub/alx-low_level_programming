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
	short int len, stringHalf, i;

	len = 0;
	/* Calculating the length of string */
	while (str[len] != '\0')
		len++;
	len--;
	if (len % 2 == 0)
		stringHalf = (len - 1) / 2;
	else
		stringHalf = len / 2 + 1;

	/* Printing the second half */
	for (i = stringHalf; i <= len; i++)
		_putchar(str[i]);
	_putchar('\n');
}
