/**
 * _strlen_recursion - returns the length of a string
 *
 * @s: string
 */

int _strlen_recursion(char *s)
{
	int i = 0;

	while (s[i])
		i++;

	return (i);
}
