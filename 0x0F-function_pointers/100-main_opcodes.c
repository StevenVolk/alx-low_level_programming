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
	int a, b;
	unsigned char *c;

	a = atoi(argv[1]);
	b = 0;
	c = (unsigned char *) main;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	else if (a < 0)
	{
		printf("Error\n");
		exit(2);
	}
	else
	{
		while (b < (a - 1))
			printf("%hhx", c[b++]);
		printf("%hhx\n", c[b]);
	}
	return (0);
}
