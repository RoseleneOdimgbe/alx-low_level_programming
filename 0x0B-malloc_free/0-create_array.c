#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 *create_array - this is the array for prints a string
 *@size: this numbers elements array
 *@c: the char
 *Return: pointer
 */

char *create_array(unsigned int size, char c)
{
char *buffer;
unsigned int position;

if (size == 0)
{
return (NULL);
}

/*Define the values with malloc*/
buffer = (char *) malloc(size * sizeof(c));

if (buffer == 0)
{
return (NULL);
}

else
{
position = 0;
while (position < size) /*While for arrays*/
{
*(buffer + position) = c;
position++;
}

return (buffer);
}

}
