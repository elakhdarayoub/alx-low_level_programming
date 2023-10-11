#include "main.h"

/**
 * print_alphabet - it does what exactly says.
 *
 * Description: it prints a list of english alphabets.
 * Retrun: void.
 */
void print_alphabet(void)
{
	char alpha;

	alpha = 'a';
	while (alpha <= 'z')
	{
		_putchar(alpha);
		alpha++;
	}
	_putchar('\n');
}
