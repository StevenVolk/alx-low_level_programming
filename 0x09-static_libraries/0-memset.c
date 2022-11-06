/**
 * _memset - the first n bytes pointed to by s with the constant byte b
 *
 * @s: memory area
 * @b: constant byte
 * @n: n bytes to be replaced
 * Return: return s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}

	return (s);
}
