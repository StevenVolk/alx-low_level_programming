#include "main.h"

/**
 * main - print all alphabets in lower case
 *
 * Return: returns zero
 */

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');

	return (0);
}
