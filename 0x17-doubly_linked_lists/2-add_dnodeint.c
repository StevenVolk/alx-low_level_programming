#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list
 * @head: head of dlistint_t list
 * @n: value of new node
 * Return: nothing
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t **new_node;
	*new_node->n = n;
	*new_node->prev = NULL;
	*new_node->next = *head;
	*head->prev = *new_node;
	*head = *new_node;
}
