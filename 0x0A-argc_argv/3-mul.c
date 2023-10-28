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
	int result, a, b;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		a = argv[1];
		b = argv[2];
		result = a * b;
	}
	printf("%d\n", result);
	return (0);
}
