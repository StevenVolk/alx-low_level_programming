#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 *
 * @s1: first string
 * @s2: second string
 * @n: at n bytes of second string
 * Return: a pointer to new string memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int a, b, i, j, k;
	char *nconcat;

	i = 0;
	j = 0;
	a = 0;
	b = 0;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while(s1[i])
		i++;
	while(s2[j])
		j++;
	j = n;
	k = ((i + j + 1) * sizeof(char));
	if (k == NULL)
		return (NULL);
	while (a < i)
	{
		nconcat[a] = s1[a];
		a++;
	}
	while (a < (k - 1))
	{
		nconcat[a] = s2[b];
		a++;
		b++;
	}
	nconcat[a] = '\0';
	return (nconcat);
}
