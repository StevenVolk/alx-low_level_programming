#include <stdlib.h>
#include "lists.h"

/**
 * sum_listint - summs all the values of the list
 * @head: head of the list
 * Return: the sum of all values in the list
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
