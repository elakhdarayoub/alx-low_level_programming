#include "main.h"

/**
 * main - The entry point of the programm.
 * @argc: The number of args passed to the programm.
 * @argv: The array that contains the arguments srings.
 *
 * Description: A programm that prints the number of args passed to it.
 * Return: 0;
 */
int main(int argc, char **argv)
{
	int i;

	(void)argv;
	if (argc > 1)
	{
		for (i = 0; i < argc - 1; i++)
			;
		printf("%d\n", i);
	}
	else
		printf("%d\n", argc - 1);
	return (0);
}
