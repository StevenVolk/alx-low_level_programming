#include "main.h"

/**
 * print_alphabet - print all alphabets in lower case
 *
 * Return: returns zero
 */

void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');

	return (0);
}
