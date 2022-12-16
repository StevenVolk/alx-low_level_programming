#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - gets the nth node of a dlistint_t linked list
 * @head: head of the dlistint_t list
 * @index: index of the node to find
 * Return: the nth node of a dlistint_t linked list
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int n = 0;
	dlistint_t *node = NULL;

	node = head;
	while (node)
	{
		if (n == index)
		{
			return (node);
		}
		node = node->next;
		n++;
	}

	return (NULL);
}
