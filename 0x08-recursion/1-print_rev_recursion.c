#include "main.h"
/**
 * _print_rev_recursion - prints in reverse
 *
 * @s: string
 */

void _print_rev_recursion(char *s)
{
	int i, j;
	char *t = char *s;

	if (s[i] == '\0')
		return;
	while (s[i])
	{
		i++;
	}
	_putchar(s[i - 1]);

	for (j = 0; j < (i - 1); j++)
	{
		t[j] = s[j];
	}
	t[j] = '\0';
	_print_rev_recursion(t);
}
