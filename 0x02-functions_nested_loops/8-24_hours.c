#include "main.h"

/**
 * jack_bauer - prints 00:00 to 23:59.
 *
 * Description: prints the whole day hours.
 * Return: void.
 */
void jack_bauer(void)
{
	short int i, j;

	i = 0;
	while (i < 24)
	{
		j = 0;
		while (j < 60)
		{
			_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');
			_putchar(':');
			_putchar((j / 10) + '0');
			_putchar((i % 10) + '0');
			_putchar('\n');
			j++;
		}
		i++;
	}
}
