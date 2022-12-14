#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_element - prints an element of [i] val
 * @l: length of element
 * @val: element
 * Return: Always 0
 */
int print_element(unsigned int l, char *val)
{
	int j;
	unsigned int k, x;

	_putchar('[');
	if (l > 9)
	{
		k = l / 10;
		_putchar('0' + k);
		x = l % 10;
		_putchar('0' + x);
	}
	else
		_putchar('0' + l);
	_putchar(']');
	_putchar(' ');
	for (j = 0; val[j] != '\0'; j++)
	{
		_putchar(val[j]);
	}
	_putchar('\n');
	return (0);
}

/**
 * print_list - print each elements in a singly linked list
 * @h: head of a linked list
 * Return: number of nodes in a linked link
 */
size_t print_list(const list_t *h)
{
	char *val;
	const list_t *current;
	unsigned int l;
	int i = 0;

	current	= h;
	if (current == NULL)
	{
		i = 0;
	}
	else
	{
		while (current != NULL)
		{
			i++;
			val = current->str;
			l = current->len;
			if (val == NULL)
			{
				val = "(nil)";
				l = 0;
			}
			print_element(l, val);
			current = current->next;
		}
	}
	return (i);
}
