#include "main.h"

/**
 * print_alphabet_x10 - prints alpha 10 times.
 *
 * Description: prints the whole alphabet 10 times in a row..
 * Return : void.
 */
void print_alphabet_x10(void)
{
	short int i;
	char alpha;

	for (i = 0; i < 10; i++)
	{
		alpha = 'a';
		while (alpha <= 'z')
		{
			_putchar(alpha);
			alpha++;
		}
		_putchar('\n');
	}
}
