#include "main.h"

/**
  * _strcmp - this is the main function
  *
  * @s1: the first function parameter
  *
  * @s2: the second function parameter
  *
  * Return: s1, s2
  */

int _strcmp(char *s1, char *s2)

{

int k = 0;

while (s1[k] != '\0' && s2[k] != '\0')
{
	if (s1[k] != s2[k])
	{
	return (s1[k] - s2[k]);
	}
	k++;
	}

	return (0);
}
