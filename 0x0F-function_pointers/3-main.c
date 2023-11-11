#include "3-calc.h"
#include <string.h>

/**
 * main - Entry point.
 * @argc: Arguments count.
 * @argv: List of arguments.
 * Return: 0 if success.
 */
int main(int argc, char **argv)
{
	int num1, num2, result;

	if (argc != 4)
		return (1);

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	result = get_op_func(argv[2])(num1, num2);
	printf("%d\n", result);
	return (0);
}
