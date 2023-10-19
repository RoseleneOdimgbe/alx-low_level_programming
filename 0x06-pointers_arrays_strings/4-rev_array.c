#include "main.h"

/**
  * reverse_array - this is the main faunction
  *
  * @a: this is the first function parameter
  *
  * @n: this is the second function parameter
  *
  * Return: Always 0
  */

void reverse_array(int *a, int n)

{

	int k, r;

	for (k = 0; k < n--; k++)
	{
	r = a[k];
	a[k] = a[n];
	a[n] = r;
	}

}
