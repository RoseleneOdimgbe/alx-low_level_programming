#include "main.h"

/**
  * _puts - the function name
  * @str: this is the function parameter
*/

void _puts(char *str)

{
int i;

for (i = 0; str[i] != '\0'; i++)
_putchar (str[i]);
_putchar ('\n');

}
