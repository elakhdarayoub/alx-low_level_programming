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
	short int len, final_len, startPoint, i;

	len = 0;
	/* Calculating the length of string */
	while (str[len] != '\0')
		len++;
	final_len = (len - 1) / 2;
	startPoint = (len - 1) - final_len;

	if (final_len % 2 != 0)
		startPoint++;

	/* Printing the second half */
	for (i = startPoint; i <= len - 1; i++)
		_putchar(str[i]);
	_putchar('\n');
}
