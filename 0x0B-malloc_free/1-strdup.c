#include "main.h"
#include <stdlib.h>

/**
 *_strlen - this counts arrays
 *@s: the array of elements
 *Return: 1
 */

int _strlen(char *s)

{

unsigned int i;

i = 0;
while (s[i] != '\0') /*counts characters of str*/
{
i++;
}

return (i);
}

/**
 *_strcpy - this copy arrays
 *@src: the array of elements
 *@dest: the dest array
 *Return: dest
 */

char *_strcpy(char *dest, char *src)

{

int i = 0;

while (src[i] != '\0')
{
dest[i] = src[i];
i++;
}
dest[i] = '\0';

return (dest);
}

/**
 *_strdup - the array for prints a string
 *@str: the array of elements
 *Return: the pointer
 */

char *_strdup(char *str)
{
char *dst;
unsigned int size;

if (str == 0)
{
return (NULL);
}

size = _strlen(str) + 1;

dst = (char *) malloc(size *sizeof(char));

if (dst == 0)
{
return (NULL);
}
_strcpy(dst, str);

return (dst);
}
