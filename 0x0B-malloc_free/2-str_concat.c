#include "main.h"
#include <stdlib.h>

/**
 *_strlen - this counts array
 *@s: the array of elements
 *Return: i
 */

int _strlen(char *s)

{
	unsigned int i;

	i = 0;
	while (s[i] != '\0') /*Counts the characters of string*/
	{
		i++;
	}

	return (i);
}

/**
 *str_concat - this backs a pointer to the array
 *@s1: the first array
 *@s2: the second array
 *Return: Always an array dynamic
 */

char *str_concat(char *s1, char *s2)

{
	char *dst;
	unsigned int i, j, size;

	/*If array is empty*/
	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	/*counts the size total*/
	size = (_strlen(s1) + _strlen(s2) + 1);

	/*malloc*/
	dst = (char *) malloc(size * sizeof(char));

	if (dst == 0)
	{
		return (NULL);
	}

	/*Concatenate array*/
	for (i = 0; *(s1 + i) != '\0'; i++)
		*(dst + i) = *(s1 + i);

	for (j = 0; *(s2 + j) != '\0'; j++)
	{
		*(dst + i) = *(s2 + j);
		i++;
	}

	return (dst);
}
