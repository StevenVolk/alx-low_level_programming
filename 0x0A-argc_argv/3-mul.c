#include <stdio.h>

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

	product = argv[1] * argv[2];
	if (argc != 3)
		return ("%d\n", product);
	else
		return("%s\n", "Error");
	return (1);
}
