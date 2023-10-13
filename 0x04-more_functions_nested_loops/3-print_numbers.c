#include "main.h"

/**
 * print_numbers - Prints from 0 to 9.
 *
 * Description: Prints from 0 to 9.
 * Return: void.
 */
void print_numbers(void)
{
	short int i;
	
	for (i = 0; i < 10; i++)
		_putchar(48 + i);
	_putchar(' ');
}
