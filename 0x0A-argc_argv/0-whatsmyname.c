#include "main.h"

/**
 * main - Program writes its name.
 * @argc:- The number of flags.
 * @argv: An array that contains the flags.
 *
 * Description: A program that prints its name.
 * Return: 0 for success.
 */

int main(int argc, char **argv)
{
	printf("%s\n", argv[argc-1]);
	return (0);
}
