#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - main function
 *
 * @argc: number of arguements
 * @argv: arguements
 * Return: value with an operation of two integer
 */

int main(int argc, char *argv[])
{
	int i, j, k;
	int (*p)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	i = atoi(argv[1]);
	j = atoi(argv[3]);
	p = get_op_func(argv[2]);

	if (p == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	k = (*p)(i)(j);
	return (k);
}
