#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * _check_malloc - checks the size of an arguement and allocate memory
 *
 * @arg: arguement
 * Return: returns allocated space and if not int, return NULL
 */

int *_check_malloc(char *argv)
{
	int i;

	for (i = 0; argv[i] != '\0'; i++)
	{
		if (argv[i] < '0' || argv[i] > '9')
		{
			printf("%s\n", "Error");
			return (NULL);
		}
	}
	return (malloc(i * sizeof(char)));
}

/**
 * main - multiplies the second and third arguement
 *
 * Return: Always 0, 1 if in error
 */

int main(int argc, char *argv[])
{
	int *a, *b;
	int count;

	count = 0;
	while (argv[count])
		count++;
	if (count != 3)
	{
		printf("%s\n", "Error");
		exit(98);
		return (1);
	}
	a = _check_malloc(argv[1]);
	b = _check_malloc(argv[2]);
	if (a == NULL || b == NULL)
	{
		exit(98);
		return (1);
	}
	return (0);
}
