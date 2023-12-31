#include "main.h"
#include <stdio.h>
#include <stdlib.h>


/**
 *_calloc - this allocates memory for an array using calloc
 *@nmemb: the number of elements in the array
 *@size: the size of the array
 *Return: pointer to newly allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)

{

char *p;
unsigned int i;

if (nmemb == 0 || size == 0)
return (NULL);

p = malloc(nmemb * size);
if (p == NULL)
return (NULL);

for (i = 0; i < nmemb * size; i++)
p[i] = 0;

return (p);

}
