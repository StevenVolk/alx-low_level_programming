#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_element - prints an element of [i] val
 * @i: length of element
 * @val: element
 * Return: Always 0
 */
int print_element(unsigned int l, char *val)
{
	int j;

	_putchar('[');
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
	struct list_s *current;
	unsigned int l, i = 1;

	current	= h->next;
	if (h == NULL)
	{
		i = 0;
	}
	else if (h->str == NULL)
	{
		i = 0;
		val = "(nil)";
		print_element(0, val);
	}
	else
	{
		while (current != NULL)
		{
			i++;
			val = h->str;
			l = h->len;
			print_element(l, val);
			current = current->next;
		}
	}
	return (i);
}
