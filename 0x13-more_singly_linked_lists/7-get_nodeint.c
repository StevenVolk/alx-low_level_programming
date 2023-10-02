#include <stdlib.h>
#include "lists.h"

/**
 * get_nodeint_at_index - gets a node at an index
 * @head: head of the linked list
 * @index: index of node in consideration
 * Return: node at an index
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (i < index && head)
	{
		head = head->next;
		i++;
	}

	if (i == index)
		return (head);
	return (NULL);
}
