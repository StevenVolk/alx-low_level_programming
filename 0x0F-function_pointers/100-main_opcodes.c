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
	int a, b, count;
	unsigned char *c;

	count = 0;
	while (argv[count])
		count++;

	if (count != 2)
	{
		printf("Error\n");
		exit(1);
	}

	a = atoi(argv[1]);
	b = 0;
	c = (unsigned char *)main;

	if (a < 0)
	{
		printf("Error\n");
		exit(2);
	}

	if (a > 0)
	{
		while (b < (a - 1))
			printf("%hhx", c[b++]);
		printf("%hhx\n", c[b]);
	}
	return (0);
}
