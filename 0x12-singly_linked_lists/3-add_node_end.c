#include <stdio.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node_end - add a node to the end
 * @head: head of a singly linked list
 * @str: new element to be added at the tail of linked list
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int i = 0;
	list_t *current;
	list_t *new_element;

	current = *head;
	while (str[i] != '\0')
		i++;

	new_element = malloc(sizeof(list_t));
	if (new_element == NULL)
		return (NULL);
	new_element->str = stdrup(str);
	new_element->len = i;
	new_element->next = NULL;
	if (new_element == NULL)
		return (NULL);
	if (*head == NULL)
	{
		*head = new_element;
		return (*head);
	}
	while (current->next != NULL)
		current = current->next;
	current->next = new_element;
	return (*head);
}
