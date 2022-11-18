#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_char - prints the char variable
 * @item: what to be printed
 */
void print_char(va_list item)
{
	printf("%c", va_arg(item, int));
}

/**
 * print_int - prints the int variable
 * @item: what to be printed
 */
void print_int(va_list item)
{
	printf("%i", va_arg(item, int));
}

/**
 * print_float - prints the float variable
 * @item: what to be printed
 */
void print_float(va_list item)
{
	printf("%f", va_arg(item, double));
}

/**
 * print_string - prints the string variable
 * @item: what to be printed
 */
void print_string(va_list item)
{
	char *new_item;

	new_item = va_arg(item, char *);
	if (new_item == NULL)
		new_item = "(nil)";
	printf("%s", new_item);
}

/**
 * print_all - prints all
 *
 * @format: list all types of arguements
 */
void print_all(const char * const format, ...)
{
	char *separator = "";
	int i = 0, j = 0;
	op_t t[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string},
		{NULL, NULL}
	};
	va_list item;

	va_start(item, format);
	while (format[i])
	{
		while (t[j].op)
		{
			if (format[i] == *t[j].op)
			{
				printf("%s", separator);
				t[j].f(item);
				separator = ", ";
			}
			j++;
		}
		j = 0;
		i++;
	}
	printf("\n");
	va_end(item);
}
