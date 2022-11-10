#include <stdio.h>
#include "3-calc.h"

/**
 * op_add - sum of two interger
 * @a: first integer
 * @b: second integer
 * Return: sum of two integer
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtract on integer from another
 * @a: First integer
 * @b: Second integer
 * Return: subtraction of one integer from another
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiple two integers
 * @a: First integer
 * @b: Second integer
 * Return: multiplication of two integers
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - division between two integers
 * @a: First integer
 * @b: Second integer
 * Return: Division of two integers
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Return\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - modulus between two integers
 * @a: First integer
 * @b: Second integer
 * Return: Modulus between two integers
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Return\n");
		exit(100);
	}
	return (a % b);
}
