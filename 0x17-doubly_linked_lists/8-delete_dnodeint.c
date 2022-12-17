#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes node at an index of a dlistint_t list
 * @head: head of a dlistint_t list
 * @index: index of node to be deleted
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = NULL;
	int i = 0;

	if (head == NULL || *head == NULL || index < 0)
		return (-1);

	current = *head;

	while (current)
	{
		if (index == i)
		{
			current->prev->next = current->next;
			current->next->prev = current->prev;
			return (1);
		}
		current = current->next;
		i++;
	}

	return (-1);
}
