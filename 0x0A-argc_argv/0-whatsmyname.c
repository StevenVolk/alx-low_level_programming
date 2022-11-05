#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - main function
 *
 * @argc: index of array
 * @argv: array of arguements
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	if (argc == 0)
		return (1);
	printf("%s\n", argv[0]);
	return (0);
}
