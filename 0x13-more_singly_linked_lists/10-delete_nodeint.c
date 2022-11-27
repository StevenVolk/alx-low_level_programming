#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node at an index
 * @head: head of a linked list
 * @index: index of node to be deleted
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *node, *node_to_free;

	node = *head;
	if (head == NULL)
		return (-1);
	if ((*head) == NULL)
		return (-1);
	if (i == 0)
	{
		*head = (*head)->next;
		free(node);
		return (1);
	}
	while (node)
	{
		if (i == (index - 1))
		{
			node_to_free = node->next;
			node->next = node->next->next;
			free(node_to_free);
			return (1);
		}
		i++;
		node = node->next;
	}
	return (-1);
}
