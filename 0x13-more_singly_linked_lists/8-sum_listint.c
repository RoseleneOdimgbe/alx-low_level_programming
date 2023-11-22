#include "lists.h"
#include <stdio.h>
#include <stdlib.h>


/**
 * sum_listint - this calculates the sum of all the
 * data (n) of a listint_t list
 * @head: the pointer to the head of the listint_t list
 * Return: the sum of all the data, or 0 if the list is empty
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
