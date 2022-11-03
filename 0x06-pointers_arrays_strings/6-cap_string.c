/**
 * cap_string - capitalize the first letter of every word
 * @c: input string
 *
 * Return: returns the capitalized version of the input string
 */

char *cap_string(char *c)
{
	int i, j;
	char s[] = {32, '\t', '\n', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}'};

	i = 1;
	if ((c[0] >= 'a') && (c[0] <= 'z'))
		c[0] = c[0] - 32;

	while (c[i])
	{
		if ((c[i] >= 'a') && (c[i] <= 'z'))
		{
			j = 0;
			while (s[j])
			{
				if (s[j] == c[i - 1])
				{
					c[i] = c[i] - 32;
					break;
				}
				j++;
			}
		}
		i++;
	}

	return (c);
}
