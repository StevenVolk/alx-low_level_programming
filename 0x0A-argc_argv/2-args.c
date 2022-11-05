#include <stdio.h>

/**
 * main - main function
 *
 * @argc: index of arguements
 * @argv: array of arguements
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
