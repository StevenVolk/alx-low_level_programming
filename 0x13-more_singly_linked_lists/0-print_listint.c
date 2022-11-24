#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * print_listint - print the ints in the linked list
 *
 * @h: head of the linked list
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	int i = 0;

	while (h)
	{
		printf("%i", h->n);
		h = h->next;
		i++;
	}

	return (i);
}
