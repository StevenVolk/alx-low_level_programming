#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list
 * @head: head of dlistint_t list
 * @n: value of new node
 * Return: head of dlistint_t list
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = NULL;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;

	if (*head)
	{
		new_node->prev = (*head)->prev;
		(*head)->prev = new_node;
	}
	else
		new_node->prev = NULL;

	*head = new_node;
	return (*head);
}
