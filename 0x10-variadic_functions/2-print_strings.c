#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - print numbers separated by a separator
 *
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list list;
	char *p;

	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		p = va_arg(list, char*);
		if (p == NULL)
			printf("(nil)");
		else
			printf("%s", p);
		if (separator != NULL && i < (n - 1))
			printf("%s", separator);
	}
	printf("\n");
	va_end(list);
}
