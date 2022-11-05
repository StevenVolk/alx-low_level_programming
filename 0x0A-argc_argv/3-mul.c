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
	int a = atio(argv);

	if (argc != 3)
		printf("%d\n", a[1] * a[2]);
	else
		printf("%s\n", "Error");
	return (1);
}
