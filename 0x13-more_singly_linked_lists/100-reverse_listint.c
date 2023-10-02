#include <stdlib.h>
#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list
 * @head: head of a linked list
 * Return: a listint_t linked list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *node = NULL, *next_node;

	if (head == NULL)
		return (NULL);
	if (*head == NULL)
		return (NULL);
	while (*head)
	{
		next_node = (*head)->next;
		(*head)->next = node;
		node = *head;
		*head = next_node;

	}
	*head = node;
	return (*head);
}
