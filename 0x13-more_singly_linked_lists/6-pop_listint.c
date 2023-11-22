#include "lists.h"
#include <stdio.h>
#include <stdlib.h>


/**
 * pop_listint - this deletes the head node of a listint_t list
 * @head: the pointer to the address of the head of the list
 * Return: the head node's data (n), or 0 if the linked list is empty
 */

int pop_listint(listint_t **head)

{
	listint_t *tmp;
	int ret;

	if (*head == NULL)
	return (0);

	tmp = *head;
	ret = (*head)->n;
	*head = (*head)->next;
	free(tmp);

	return (ret);

}
