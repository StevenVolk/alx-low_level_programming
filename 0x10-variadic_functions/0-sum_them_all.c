#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - a function to sum all elements
 * @n: integers
 * Return: sum of all integers
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, sum = 0;

	if (n == 0)
		return (0);

	va_start(ap, n);

	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);

	va_end(ap);
	return (sum);
}
