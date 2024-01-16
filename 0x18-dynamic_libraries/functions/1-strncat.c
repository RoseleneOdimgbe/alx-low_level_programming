#include "main.h"

/**
  * _strncat  - this is the main function
  *
  * @n: the first function parameter
  *
  * @src: the second function parameter
  *
  * @dest: the third function parammeter
  *
  * Return: dest
  */

char *_strncat(char *dest, char *src, int n)

{
	int k, r;

	k = 0;
	r = 0;

	while (dest[k] != '\0')
	{
	k++;
	}
	while (r < n && src[r] != '\0')
	{
	dest[k] = src[r];
	k++;
	r++;
	}
	dest[k] = '\0';
	return (dest);

}
