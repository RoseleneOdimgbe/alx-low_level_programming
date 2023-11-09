#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * op_add - this calculates the sum of two integers
 * @a: the first integer
 * @b: the second integer
 * Return: the sum of a and b
 */

int op_add(int a, int b)

{
	return (a + b);
}

/**
 * op_sub - this calculates the difference between two integers
 * @a: the first integer
 * @b: the second integer
 * Return: the difference between a and b
 */

int op_sub(int a, int b)

{
	return (a - b);
}

/**
 * op_mul - this calculates the product of two integers
 * @a: the first integer
 * @b: the second integer
 * Return: the product of a and b
 */

int op_mul(int a, int b)

{
	return (a * b);
}

/**
 * op_div - this calculates the division of two integers
 * @a: the first integer
 * @b: the second integer
 * Return: the result of the division of a and b
 */

int op_div(int a, int b)

{
	return (a / b);
}

/**
 * op_mod - this calculates the remainder of the division of two integers
 * @a: the first integer
 * @b: the second integer
 * Return: remainder of a divided b
 */

int op_mod(int a, int b)

{
	return (a % b);
}
