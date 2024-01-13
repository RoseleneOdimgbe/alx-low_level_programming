#include "lists.h"

/**
 * *free_dlistint - this function frees a dlistint_t list
 *@head: the pointer to pointer of head of linked list
 * Return: void
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *node = head;
	dlistint_t *temp;

	while (node != NULL)
	{
		temp = node;
		node = node->next;
		free(temp);
		head = NULL;
	}
}
