#include <stdio.h>
#include <stdlib.h>

/**
 * main - main function
 *
 * @argc: number of arguements
 * @argv: array of arguements
 * Return: 0 if no error, otherwise 1 if error
 */

int main(int argc, char *argv[])
{
	int i, j;
	int sum = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("%s\n", "Error");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
