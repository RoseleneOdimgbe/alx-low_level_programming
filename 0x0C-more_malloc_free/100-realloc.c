#include "main.h"
#include <stdio.h>
#include <stdlib.h>


/**
 * _realloc - this reallocates a memory block using malloc and free
 * @ptr: the pointer
 * @old_size: the old size
 * @new_size: the new size
 * Return: pointer
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)

{

	char *clone, *realloc;
	unsigned int i;

	if (ptr != NULL)
	clone = ptr;
	else
	{ return (malloc(new_size)); }
	if (new_size == old_size)
	return (ptr);
	if (new_size == 0 && ptr != NULL)
	{ free(ptr);
	return (0); }
	realloc = malloc(new_size);
	if (realloc == NULL)
	return (0);
	for (i = 0; i < (old_size || i < new_size); i++)
	{
		*(realloc + i) = clone[i];
	}
	free(ptr);
return (realloc);

}
