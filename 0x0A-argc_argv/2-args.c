#include "main.h"

/**
 * main - Entry point.
 * @argc: Number of arguments.
 * @argv: Array of arguments string.
 *
 * Description: A program that prints its arguments.
 * Return: 0;
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
