#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * find_length - finds the length of a dlistint_t list
 * @head: head of a dlistint_t list
 * Return: length of the dlistint_t list
 */

unsigned int find_length(dlistint_t *head)
{
	unsigned int i = 0;

	while (head)
	{
		i++;
		head = head->next;
	}

	return (i);
}

/**
 * delete_dnodeint_at_index - deletes node at an index of a dlistint_t list
 * @head: head of a dlistint_t list
 * @index: index of node to be deleted
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current;
	unsigned int i = 0, length;

	current = *head;
	length = find_length(current);
	if (head == NULL || (*head) == NULL || index >= length)
		return (-1);
	if (index == 0)
	{
		if (current->next)
		{
			current->next->prev = (*head)->prev;
			*head = current->next;
		}
		else
			*head = NULL;
		free(current);
		return (1);
	}
	while (current)
	{
		if (i == index)
		{
			if (index != length - 1)
				current->next->prev = current->prev;
			current->prev->next = current->next;
			free(current);
			return (1);
		}
		current = current->next;
		i++;
	}
	return (-1);
}
