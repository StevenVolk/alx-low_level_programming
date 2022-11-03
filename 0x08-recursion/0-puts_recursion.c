/**
 * _puts_recursion - prints out a string
 *
 * @s: string to be printed
 */

void _puts_recursion(char *s)
{
	int i;

	for (i = 0; s[i]; i++)
		_putchar(s[i]);
	_putchar('\n');
}
