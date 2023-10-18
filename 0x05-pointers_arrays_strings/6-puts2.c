#include "main.h"

/**
 * puts2 - Prints every other char.
 * @str: The string.
 *
 * Description: Printing every other characher followed by newline.
 * Return: void.
 */
void puts2(char *str)
{
	short int i, j;

	i = j = 0;
	/* Calculate the length of the string*/
	while (str[i] != '\0')
		i++;

	/* Printing the chars */
	while (j <= i - 1)
	{
		if (j % 2 == 0)
			_putchar(str[j]);
		j++;
	}
	_putchar('\n');
}
