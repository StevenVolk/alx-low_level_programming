#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - concatenate all arguements
 *
 * @ac: number of arguements
 * @av: arguements
 * Return: each arguement followed by \n
 */

char *argstostr(int ac, char **av)
{
	int a, i, j, k;
	char *arg;

	a = 0;
	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			a++;
		}
		a++;
	}
	a++;
	arg = malloc(a * sizeof(char));
	if (arg == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			arg[k] = av[i][j];
			k++;
		}
		arg[k] = '\n';
		k++;
	}
	arg[k] = '\0';
	return (arg);
}
