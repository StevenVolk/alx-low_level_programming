/**
 * _memcpy - copies n bytes from memory area src to memory area dest
 *
 * @dest: destination variable
 * @src: source variable
 * @n: n bytes to copy
 * Return: returns dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\n';

	return (dest);
}
