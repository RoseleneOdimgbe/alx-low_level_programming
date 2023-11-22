#include "lists.h"
#include <stdio.h>
#include <stdlib.h>


/**
 * free_listint2 - this frees a listint_t list
 * @head: the pointer to the address of the head of the list
 * Description: this sets the head to NULL
 */

void free_listint2(listint_t **head)

{

	listint_t *tmp;

	if (head == NULL)
	return;

	while (*head)
	{
	tmp = (*head)->next;
	free(*head);
	*head = tmp;
	}
	head = NULL;

}
