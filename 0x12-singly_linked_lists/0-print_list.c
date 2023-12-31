#include <stdio.h>
#include "lists.h"
#include <stdlib.h>


/**
 * print_list - this prints all the elements of a linked list
 * @h: the pointer to the list_t list to print
 * Return: number of nodes printed
 */

size_t print_list(const list_t *h)
{
	size_t s = 0;

	while (h)
	{
	if (!h->str)
	printf("[0] (nil)\n");
	else
	printf("[%d] %s\n", h->len, h->str);
	h = h->next;
	s++;
	}

return (s);
}
