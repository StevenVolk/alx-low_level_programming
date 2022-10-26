/**
 * _strcmp - compares string; similar to strcmp
 * @s1: first string to be compared
 * @s2: second string to be compared
 *
 * Return: ASCII difference between the first character of s1 and s2
 */

int _strcmp(char *s1, char *s2)
{
	int i, diff;

	i = 0;
	diff = 0;
	while ((s1 != '\0' || s2 != '\0') && diff == 0)
	{
		diff = s1[i] - s2[i];
		i++;
	}

	return (diff);
}
