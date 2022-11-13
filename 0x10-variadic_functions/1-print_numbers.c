#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - print numbers separated by a separator
 *
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list list;

	if (separator == NULL)
		return;

	va_start(list, n);
	for (i = 0; i < (n - 1); i++)
	{
		printf(va_arg(list, int));
		printf(", ");
	}
	printf(va_arg(list, int));
	va_end(list);
}
