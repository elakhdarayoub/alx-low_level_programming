#include "3-calc.h"

/**
 * op_add - Add two integers.
 * @a: Integer 1.
 * @b: Integer 2.
 * Return: The sum of two integers.
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Subtract two integers.
 * @a: Integer 1.
 * @b: Integer 2.
 * Return: The difference between a and b.
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Multiply two integers.
 * @a: Integer 1.
 * @b: Integer 2.
 * Return: The product of two integers.
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Divide two integers.
 * @a: Integer 1.
 * @b: Integer 2.
 * Return: The quoitent of two integers.
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	else
		return (a / b);
}

/**
 * op_mod - Find the remainder from two ints division.
 * @a: Integer 1.
 * @b: Integer 2.
 * Return: The remainder.
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	else
		return (a % b);
}
