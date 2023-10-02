#include <stdio.h>
#include <stdlib.h>

/**
 * main - main function
 *
 * @argc: number of arguements
 * @argv: array of arguements
 * Return: 1 if error, otherwise 0
 */

int main(int argc, char *argv[])
{
	int j, count, amount;
	int change[] = {25, 10, 5, 2, 1};

	count = 0;
	if (argc != 2)
	{
		printf("%s\n", "Error");
		return (1);
	}

	amount = atoi(argv[1]);

	if (amount < 0)
	{
		printf("0\n");
		return (0);
	}
	for (j = 0; j < 5; j++)
	{
		count += amount / change[j];
		amount = amount % change[j];
	}
	printf("%d\n", count);
	return (0);
}
