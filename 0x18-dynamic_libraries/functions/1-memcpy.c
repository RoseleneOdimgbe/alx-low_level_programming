#include "main.h"

/**
  * _memcpy - the main function prototype
  *
  * @src: the source parameter
  *
  * @dest: the destination parameter
  *
  * @n: the function parameter
  *
  * Return: the copied memory
  */

char *_memcpy(char *dest, char *src, unsigned int n)

{

	unsigned int k;

	for (k = 0; k < n; k++)
	{
	dest[k] = src[k];
	}
	return (dest);

}
