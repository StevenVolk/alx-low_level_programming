#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list
 * @head: head of list
 * @n: value of new node
 * Return: head of the dlistint_t list
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node = NULL;
	dlistint_t *node = NULL;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;
	node = *head;

	if (node == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
	}
	else
	{
		while (node->next)
		{
			node = node->next;
		}
		node->next = new_node;
		new_node->prev = node;
	}

	return (new_node);
}
