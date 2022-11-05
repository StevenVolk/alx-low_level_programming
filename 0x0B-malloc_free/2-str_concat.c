/**
 * str_concat - concatenates two strings
 *
 * @s1: first string to be concatenated
 * @s2: second string to be concatenated
 * Return: pointer to the new allocated concatenation of s1 and s2.
 */

char *str_concat(char *s1, char *s2)
{
	int i, j, k;
	char *s3;

	i = 0;
	j = 0;
	k = 0;
	if (s1 == NULL && s2 == NULL)
		return (NULL);
	while (s1[i])
		i++;
	while (s2[j])
		j++;
	s3 = malloc((i + j + 1) * sizeof(char));
	if (s3 == NULL)
		return (NULL);
	while (i > 0)
	{
		s3[k] = s1[k];
		i--;
		k++;
	}
	i = k;
	while (j > 0)
	{
		s3[k] = s2[k - i];
		j--;
		k++;
	}
	return (s3);
}
