#include "main.h"

/**
  * _memset - the main function of the prototype
  *
  * @b: the value that is used to fill the memory
  *
  * @s: the first function parameter
  *
  * @n: the second function parameter
  *
  * Return: s
  */

char *_memset(char *s, char b, unsigned int n)

{

	unsigned int a;

	for (a = 0; a < n; a++)
	s[a] = b;
	return (s);

}
