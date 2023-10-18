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
	short int len, stringHalf, startPoint, i;

	len = 0;
	/* Calculating the length of string */
	while (str[len] != '\0')
		len++;
	stringHalf = --len / 2;
	startPoint = len - stringHalf;
	if (len % 2 != 0)
		startPoint++;

	/* Printing the second half */
	for (i = startPoint; i <= len; i++)
		_putchar(str[i]);
	_putchar('\n');
}
