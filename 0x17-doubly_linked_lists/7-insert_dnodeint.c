#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * find_length - finds the length of a linked list
 * @h: head of the linked list
 * Return: length of linked list
 */

unsigned int find_length(dlistint_t *h)
{
	unsigned int i = 0;

	while (h)
	{
		i++;
		h = h->next;
	}

	return (i);
}

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: head of dlistint_t list
 * @idx: index of the list where the new node should be added
 * @n: value of the new node
 * Return: node to be added
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *node, *current_node;
	unsigned int length, i = 0;

	if (h == NULL)
		return (NULL);
	current_node = *h;
	if (current_node == NULL && idx == 0)
		return (add_dnodeint(h, n));
	length = find_length(current_node);
	if (idx == 0)
		return (add_dnodeint(h, n));
	else if (length == idx)
		return (add_dnodeint_end(h, n));
	else if (idx > length)
		return (NULL);
	while (current_node != NULL)
	{
		if (i == idx)
		{
			node = malloc(sizeof(dlistint_t));
			if (node == NULL)
				return (NULL);
			node->n = n;
			node->next = current_node;
			node->prev = current_node->prev;
			current_node->prev->next = node;
			current_node->prev = node;
			return (node);
		}
		current_node = current_node->next;
		i++;
	}
	return (current_node);
}
