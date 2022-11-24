#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 *
 * @head: head of a list
 * Return: nothing
 */

void free_listint2(listint_t **head)
{
	listint_t *current;

	if ((*head) == NULL)
		printf("Freed!");
	while (*head)
	{
		current = (*head)->next;
		free(*head);
		*head = current;
	}
}
