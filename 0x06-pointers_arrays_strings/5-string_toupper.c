/**
 * *string_toupper - functions for string to uppercase
 * @c: string
 *
 * Return: returns the string in uppercase
 */

char *string_toupper(char *c)
{
	int i;

	i = 0;
	while (c[i])
	{
		c[i] = c[i] -32;
		i++;
	}

	return (c);
}
