/**
 * _strchr - points to c in the s, or NULL if the character is not found
 *
 * @s: input string
 * @c: input character
 * Return: returns first occurence of character c to the end of string s
 */

char *_strchr(char *s, char c)
{
	int i, j, k;
	char *d;

	i = 0;
	j = 0;
	k = 0;
	while (s[i])
	{
		if (s[i] == c || j == 1)
		{
			d[k] = s[i];
			j = 1;
			k++;
		}
		i++;
	}
	d[k] = '\n';

	return (d);
}
