#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: head of a singly linked list
 * @str: new element to be added at the head of a singly linked list
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	unsigned int i = 0;
	list_t *new_element;

	while (str[i] != '\0')
		i++;
	new_element = malloc(sizeof(list_t));
	if (new_element == NULL)
		return (NULL);
	new_element->str = strdup(str);
	new_element->len = i;
	new_element->next = *head;
	*head = new_element;
	return (*head);
}
