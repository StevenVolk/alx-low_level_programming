#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 *
 * @head: head of a linked list
 * Return: value of head
 */

int pop_listint(listint_t **head)
{
	int value;

	if (head == NULL)
		return (0);
	value = (*head)->n;
	*head = (*head)->next;

	return (value);
}
