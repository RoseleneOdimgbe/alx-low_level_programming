#include "lists.h"

/**
 * print_dlistint - this function prints all the
 * elements of dlistint_t list
 *@h: this is the pointer to head of linked list
 * Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)

{
	int x;

	for (x = 0; h != NULL; x++)
	{
		printf("%i\n", h->n);
		h = h->next;
	}
	return (x);
}
