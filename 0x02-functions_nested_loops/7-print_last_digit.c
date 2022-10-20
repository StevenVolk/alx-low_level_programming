#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: input number
 *
 * Return: returns the last digit of a number
 */

int print_last_digit(int n)
{
	int x;

	x = n % 10;
	_putchar('0' + x);
	return (x);
}
