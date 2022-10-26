/**
 * strncpy - copy first n characters from src to first n characters of dest
 * @dest: destination of first n characters
 * @src: source of first n characters to be copied
 * @n: number of characters to be copied
 *
 * Return: returns dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i, j, k, z;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;

	while (src[j] != '\0')
		j++;

	if (j < n)
	{
		z = j;
		dest[z] = '\0';
	}
	else
		z = n;

	for (k = 0; k < z; k++)
	{
		dest[k] = src[k];
	}
	return (dest);
}
