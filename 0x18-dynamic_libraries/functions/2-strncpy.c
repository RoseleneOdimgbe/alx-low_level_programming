#include "main.h"

/**
  * _strncpy - this is the main function of the code
  *
  * @src: the first function parameter
  *
  * @dest: the second function parameter
  *
  * @n: the third function parameter
  *
  * Return: dest
  */

char *_strncpy(char *dest, char *src, int n)

{

	int k = 0;

	while (k < n && src[k] != '\0')
	{
	dest[k] = src[k];
	k++;
	}
	while  (k < n)
	{
	dest[k] = '\0';
	k++;
	}
	return (dest);

}
