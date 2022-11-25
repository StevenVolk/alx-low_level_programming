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
	listint_t *new_node, *node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	if (head == NULL)
		return (NULL);
	if (*head == NULL)
	{
		new_node->n = n;
		new_node->next = NULL;
		*head = new_node;
		return (new_node);
	}
	while (i < (idx - 1))
	{
		node = node->next;
		i++;
	}

	new_node->n = n;
	new_node->next = node->next;
	node->next = new_node;

	if (new_node)
		return (new_node);
	return (NULL);
}
