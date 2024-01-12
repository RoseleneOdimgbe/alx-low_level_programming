#include "lists.h"

/**
 * dlistint_len - this function returns the
 * number of elements in linked list
 *@h: const list_t pointer to head of list
 * Return: number of elements
 */

size_t dlistint_len(const dlistint_t *h)

{
	int x;

	for (x = 0; h != NULL; x++)
	{
		h = h->next;
	}
	return (x);

}
