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
	int i;

	i = 0;
	while (dest[i] != '\0')
	{
		if (src[i] == '\0')
		{
			dest[i] = '\0';
		}
		else if (i < n)
		{
			dest[i] = src[i];
		}
		i++;
	}
}
