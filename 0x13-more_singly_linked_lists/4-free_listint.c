#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * free_listint - frees a listint_t list
 *
 * @head: head of a list
 * Return: nothing
 */

void free_listint(listint_t *head)
{
	listint_t *current;

	if (head == NULL)
		return;
	while (head)
	{
		current = head->next;
		free(head->n);
		free(head);
		head = current;
	}
}
