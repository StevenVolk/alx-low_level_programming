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
		for (j = 0; j != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("%s\n", "Error");
				return (0);
			}
		}
		j = atoi(argv[i]);
		sum += j;
	}
	printf("%d\n", sum);

	return (0);
}
