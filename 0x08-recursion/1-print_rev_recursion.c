#include "main.h"
/**
 * _print_rev_recursion - prints in reverse
 *
 * @s: string
 */

void _print_rev_recursion(char *s)
{
	int i;

	if (s[i] == '\0')
		return;
	while (s[i])
	{
		i++;
	}
	_putchar(s[i - 1]);
	s[i - 1] = '\0';
	_print_rev_recursion(s);
}
