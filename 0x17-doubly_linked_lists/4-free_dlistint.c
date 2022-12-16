#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list
 * @head: head of a delistint_t list
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *node = NULL;
	
	node = head;
	while (node)
	{
		node = head->next;
		free(head);
		head = node;
	}
}
