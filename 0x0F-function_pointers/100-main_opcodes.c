#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the opcodes of its function
 * @argc: number of arguements
 * @argv: array of arguements
 * Return: 0 if successuly, otherwise, 1 or 2
 */

int main(int argc, char *argv[])
{
	int i, j;
	unsigned char *c;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	i = atoi(argv[1]);
	j = 0;
	c = (unsigned char *)main;

	if (i < 0)
	{
		printf("Error\n");
		exit(2);
	}

	if (i > 0)
	{
		while (j < (i - 1))
			printf("%hhx", c[b++]);
		printf("%hhx\n", c[b]);
	}

	return (0);
}
