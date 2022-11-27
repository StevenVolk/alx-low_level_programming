#include <stdlib.h>
#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list
 * @head: head of a linked list
 * Return: a listint_t linked list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *node, *next_node;

	if (head == NULL)
		return (NULL);
	if (*head == NULL)
		return (NULL);
	node = *head;
	next_node = node->next;
	node->next = NULL;
	while (next_node)
	{
		(node->next)->next = node;
		node = next_node;
		next_node = next_node->next;
	}
	*head = node;
	return (*head);
}
