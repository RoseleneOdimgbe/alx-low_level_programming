#include "lists.h"
#include <stdio.h>

/**
 * print_list - this prints all the elements of a list_t list
 * @h: this is the list_t list
 * Return: number of elements in the list
 */

size_t print_list(const list_t *h)

{

size_t nodes;
nodes = 0;
while (h != NULL)
{
if (h->str == NULL)
printf("[%d] %s\n", 0, "(nil)");
else
printf("[%d] %s\n", h->len, h->str);
h = h->next;
nodes++;
}
return (nodes);

}
