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
	int i, j, k;
	char *arg;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; j < av[i]; j++)
		{
			arg[k] = av[i][j];
			k++;
		}
		arg[k] = '\n';
		k++;
	}
	return (arg);
}
