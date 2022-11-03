/**
 * _strspn - returns the number of acceptable bytes in s
 *
 * @s: bytes to be checked
 * @accept: acceptable bytes
 *
 * Return: number of acceptable bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j, k;

	i = 0;
	k = 0;
	while (s[i])
	{
		if (s[i] != 32)
		{
			j = 0;
			while (accept[j])
			{
				if (s[i] == accept[j])
				{
					k++;
					break;
				}
				j++;
			}
		}
		else
			return (k);
		i++;
	}
	return (k);
}
