#include "lists.h"

/**
 * sum_dlistint - this function returns sum of all data of a list
 *@head: the pointer to pointer of head of linked list
 * Return: 0 if empty
 */

int sum_dlistint(dlistint_t *head)
{
	int x = 0;

	while (head)
	{
		x += head->n;
		head = head->next;
	}
	return (x);
}
