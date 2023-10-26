#include "main.h"

/**
  * _pow_recursion - the function name
  * @x: the first parameter
  * @y: the second parameter
  * Return: the value of a given number passed to the function
  */

int _pow_recursion(int x, int y)

{

	if (y < 0)
	return (-1);

	else if (y == 0)
	return (1);

	else
	return (x * _pow_recursion(x, (y - 1)));

return (0);

}
