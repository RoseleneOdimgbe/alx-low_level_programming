#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - this executes a function given as a parameter
 * on each element of an array
 * @array: the array to iterate over
 * @size: the size of the array
 * @action: the pointer to function used
 */

void array_iterator(int *array, size_t size, void (*action)(int))

{
	unsigned int i;

	if (!array || !action)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);
}
