#include <stdio.h>

/**
 * main - print alphabets reversed in lowercase
 *
 * Return: returns zero
 */

int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; c--)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
