#include "function_pointers.h"

/**
 * print_name - As the name implies.
 * @name: The string to print.
 * @f: The functin used for printing.
 * Return: void.
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
