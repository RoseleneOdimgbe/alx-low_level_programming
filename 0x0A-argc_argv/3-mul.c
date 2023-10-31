#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - this prints the multiplication of two integers
 * @argc: this is the argument count
 * @argv: this is the argument vector
 * Return: 0 if true, 1 if false
 */

int main(int argc, char *argv[])

{

int a, b;
if (argc == 3)
{
a = atoi(argv[1]);
b = atoi(argv[2]);
printf("%d\n", a *b);
return (0);
}
printf("Error\n");
return (1);

}
