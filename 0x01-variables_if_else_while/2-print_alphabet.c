#include <stdio.h>

/**
 * main - print all alphabets in lowercase
 *
 * Return: returns zero
 */

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}
	putchar('\n');

	return (0);
}
