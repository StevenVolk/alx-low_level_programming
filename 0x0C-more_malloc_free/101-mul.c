#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * _check_malloc - checks the size of an arguement and allocate memory
 *
 * @argv: arguement
 * Return: returns allocated space and if not int, return NULL
 */

char *_check_malloc(char *argv)
{
	int i;

	for (i = 0; argv[i] != '\0'; i++)
	{
		if (argv[i] < '0' || argv[i] > '9')
			return (NULL);
	}
	return (malloc(i * sizeof(char)));
}

/**
 * main - multiplies the second and third arguement
 *
 * @argc: number of arguements
 * @argv: arguements
 * Return: Always 0, 1 if in error
 */

int main(int argc, char *argv[])
{
	char *a, *b;

	if (argc != 3)
	{
		printf("%s\n", "Error");
		exit(98);
	}
	a = _check_malloc(argv[1]);
	b = _check_malloc(argv[2]);
	if (a == NULL || b == NULL)
	{
		printf("%s\n", "Error");
		exit(98);
	}
	char a = argv[1];
	return (a);
}
