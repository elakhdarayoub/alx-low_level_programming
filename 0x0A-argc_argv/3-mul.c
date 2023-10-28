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
	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", argv[1] * argv[2]);
	return (0);
}
