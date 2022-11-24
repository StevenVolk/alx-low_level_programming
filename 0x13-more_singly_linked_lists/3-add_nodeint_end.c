#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_nodeint_end - add a node to the end of a linked list
 *
 * @head: head of the linked list
 * @n: value to be saved in linked list
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *head_cp;

	heap_cp = *head;
	while (head_cp->next)
		head_cp = head_cp->next;
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	head_cp->next = new_node;
	new_node->n = n;
	new_node->next = NULL;

	return (*head);
}
