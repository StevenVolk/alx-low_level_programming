#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: head of dlistint_t list
 * @idx: index of the list where the new node should be added
 * @n: value of the new node
 * Return: node to be added
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *node;
	unsigned int i = 0;

	while (*h)
	{
		if (i == idx)
		{
			node = malloc(sizeof(dlistint_t));
			if (node == NULL)
				return NULL;
			node->n = n;
			node->next = *h;
			node->prev = (*h)->prev;
			(*h)->prev = node;
			return (node);
		}
		*h = (*h)->next;
		i++;
	}

	return (NULL);
}
