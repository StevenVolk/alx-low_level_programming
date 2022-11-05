#include <stdio.h>
#include <stdlib.h>

/**
 * main - main function
 *
 * @argc: index of arguements
 * @argv: array of arguements
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	if (!argv[0])
		return (1);
	printf("%d\n", argc);
	return (0);
}
