/**
 * chk_length - counts length of string
 *
 * @s: string to be checked
 * @i: number if strings
 * Return: length of string
 */
int chk_length(char *s, int i)
{
	if (s[i]) return (chk_length(s, i + 1));
	else return (i);
}

/**
 * chk_palindrome - checks if palindrome
 *
 * @s: string to be checked
 * @a: first index to compare with
 * @z: second index to compare with
 * Return: 1 if palindrome, otherwise 0
 */
int chk_palindrome(char *s, int a, int z)
{
	if (s[a] != s[z]) return (0);
	else if (a < z)	return chk_palindrome(s, (a + 1), (z - 1));
	else return (1);
}

/**
 * is_palindrome - find palindrome
 *
 * @s: string to be checked if it is palindrome
 * Return: 1 if palindrome, otherwise 0
 */
int is_palindrome(char *s)
{
	int length = chk_length(s, 0);

	if (length == 0) return (1);
	else return (chk_palindrome(s, 0, length - 1));
}
