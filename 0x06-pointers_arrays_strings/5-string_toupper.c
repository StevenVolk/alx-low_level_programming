/**
 * string_toupper - functions for string to uppercase
 * @c: string
 *
 * Return: returns the string in uppercase
 */

char *string_toupper(char *c)
{
	int i;

	while (c[i])
	{
		c[i] = c[i] -32;
		i++;
	}
}
