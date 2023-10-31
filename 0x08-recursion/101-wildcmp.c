#include "main.h"

/**
 * wildcmp - this compares strings
 * @s1: the first pointer to the string parameter
 * @s2: the second pointer to the string parameter
 * Return: Always 0
 */

int wildcmp(char *s1, char *s2)

{

	if (*s1 == '\0')
	{
	if (*s2 != '\0' && *s2 == '*')
	{
	return (wildcmp(s1, s2 + 1));
	}
	return (*s2 == '\0');
	}

	if (*s2 == '*')
	{
	return (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1));
	}
	else if (*s1 == *s2)
	{
	return (wildcmp(s1 + 1, s2 + 1));
	}
	return (0);

}