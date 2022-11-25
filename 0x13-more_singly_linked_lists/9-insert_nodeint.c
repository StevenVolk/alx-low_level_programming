#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - insert node at index
 * @head: head of linked list
 * @idx: index of the list where the new node should be added
 * @n: value of new node
 * Return: new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *new_node;
	listint_t *node;

	node = *head;
	while (i < (idx - 1) && (*head))
	{
		(*head) = (*head)->next;
		i++;
	}

	if (i == (idx - 1))
	{
		new_node = malloc(sizeof(listint_t));
		if (new_node == NULL)
			return (NULL);
		new_node->n = n;
		new_node->next = (*head)->next;
		(*head)->next = new_node;
	}

	if (new_node)
		return (node);
	return (NULL);
}
