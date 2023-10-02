#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * list_len - print each elements in a singly linked list
 * @h: head of a linked list
 * Return: number of nodes in a linked link
 */
size_t list_len(const list_t *h)
{
	const list_t *current;
	int i = 0;

	current	= h;
	if (current == NULL)
	{
		return (0);
	}
	else
	{
		while (current != NULL)
		{
			i++;
			current = current->next;
		}
	}
	return (i);
}
