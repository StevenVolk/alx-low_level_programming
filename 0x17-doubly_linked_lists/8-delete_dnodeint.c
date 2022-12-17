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
	unsigned int i = 0;

	if (head == NULL || (*head) == NULL)
		return (-1);

	current = *head;

	if (index == 0)
	{
		current->next->prev = NULL;
		*head = current->next;
		free(current);
		return (1);
	}

	while (current)
	{
		if (index == i)
		{
			current->prev->next = current->next;
			current->next->prev = current->prev;
			free(current);
			return (1);
		}
		current = current->next;
		i++;
	}

	return (-1);
}
