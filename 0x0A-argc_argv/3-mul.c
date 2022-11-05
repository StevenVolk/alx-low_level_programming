#include <stdio.h>
#include <stdlib.h>

/**
 * main - main function
 *
 * @argc: length of arguements
 * @argv: array of arguements
 * Return: Always 1
 */

int main(int argc, char *argv[])
{
	int a;
	int b;

	if (argc != 3)
		printf("%s\n", "Error");
	else
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		printf("%d\n", a * b);
	}
	return (1);
}
