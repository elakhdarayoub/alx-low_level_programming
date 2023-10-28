#include "main.h"

/**
 * main - Entry point.
 * @argc: Number of arguments.
 * @argv: Array containing arguments strings.
 *
 * Description: A program that perform multiplication.
 * Return: result.
 */
int main(int argc, char **argv)
{
	int result;

	result = 0;
	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}
	else
		result = argv[1] * agrv[argc - 1]; 
	return (result);
}
