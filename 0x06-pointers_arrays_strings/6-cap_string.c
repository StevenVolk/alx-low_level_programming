/**
 * cap_string - capitalize the first letter of every word
 * @c: input string
 *
 * Return: returns the capitalized version of the input string
 */

char *cap_string(char *c)
{
	int i, j;
	char s[];

	s[] = {' ', '\t', '\n', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}'};
	i = 1;
	j = 0;
	while (c[i] != '\0')
	{
		while (s[j])
		{
			if (s[j] == c[i - 1]){
				c[i] = c[i] - 32;
				break;
			}
			j++;
		}
		i++;
	}

	return (c);
}
