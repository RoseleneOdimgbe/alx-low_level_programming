#include "main.h"

/**
  * _puts_recursion - the main function
  *
  * @s: the function parameter
  *
  * Return: Always 0
  */

void _puts_recursion(char *s)

{

	if (*s)
	{
	_putchar(*s);
	_puts_recursion(s + 1);
	}
	else
	_putchar('\n');

}
