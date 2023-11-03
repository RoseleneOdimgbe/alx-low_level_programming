#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - this allocates memory using malloc
 * @b: the size of the memory
 * Return: pointer to the new memory allocated
 */

void *malloc_checked(unsigned int b)

{

	char *output;

	output = malloc(b);
	if (output == NULL)
		exit(98);
	else
		return (output);

}
