#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: number in decimal
 * Return: nothing
 */

void print_binary(unsigned long int n)
{
	if (n == 0)
	{
		_putchar("0");
		return;
	}
	else
		print_bin(n);
}

/**
 * print_bin - prints binary representation
 * @n: number in decimal
 * Return: nothing
 */

void print_bin(unsigned long int n)
{
	if (n == 0)
		return;
	print_bin(n >> 1);
	if ((n & 1) == 1)
		_putchar("1");
	else
		_putchar("0");
}
