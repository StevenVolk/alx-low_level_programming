#include "main.h"

/**
 * print_char - prints the char variable
 * @list: what to be printed
 * Return: Always 1 for a character
 */
print_char(va_list list)
{
	_putchar(va_arg(list, int));
	return (1);
}

/**
 * _printf - performs the same function as printf
 * @format: type of arguement
 * Return: count of characters printed
 */
int _printf(const char *format, ...)
{
	int count;
	op_t t[] = {
		{"c", print_char},
		{"s", print_string},
		{"%", print_percent},
		{"d", print_float},
		{"i", print_int},
		{NULL, NULL}
	};
	va_list list;

	if (format == NULL)
		return (-1);
	va_start(list, format);
	count = parser(format, t, list);
	va_end(list);
	return (count);
}
