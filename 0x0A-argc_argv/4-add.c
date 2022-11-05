#include <stdio.h>
#include <stdlib.h>

/**
 * main - main function
 *
 * @argc: number of arguements
 * @argv: array of arguements
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int i, j;
	int sum = 0;

	for (i = 1; i < argc; i++)
	{
		j = atoi(argv[i]);
		if (!j)
		{
			printf("%s\n", "Error");
			return (0);
		}
		else
			sum += j;
	}
	printf("%d\n", sum);

	return (0);
}
