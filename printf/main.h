#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>

/**
 * struct op - Struct op
 * @op: The operator
 * @f: The function associated
 */

typedef struct op
{
	char *op;
	void (*f)(va_list item);
} op_t;

int _putchar(char c);
int _printf(const char *format, ...);

#endif /* MAIN_H */
