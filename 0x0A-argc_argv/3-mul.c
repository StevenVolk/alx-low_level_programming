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
	int product;

	product = atio(argv[1]) * atio(argv[2]);
	if (argc != 3)
		printf("%d\n", product);
	else
		printf("%s\n", "Error");
	return (1);
}
