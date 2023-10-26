#include "main.h"

/**
  * factorial - the first function parameter
  *
  * @n: the second function parameter
  *
  * Return: Function n
  */

int factorial(int n)

{

	if (n < 0)
	return (-1);
	if (n == 0)
	return (1);
	return (n * factorial(n - 1));

}
