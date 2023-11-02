#include "main.h"

/**
  * _strlen - the function name
  * @s: this is the function parameter
  * Return: the string length
*/

int _strlen(char *s)

{
int i;
int count = 0;

for (i = 0; s[i] != '\0'; i++)
	count++;

return (count);
}
