#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - the main function
 *@argc: the length of argv
 *@argv: the number of arguments
 *Return: Always 0
 */

int main(int argc, char *argv[])

{

/*Declaring the variables*/
int position, total, change, aux;
int coins[] = {25, 10, 5, 2, 1}; /*Array int*/

position = total = change = aux = 0;

if (argc != 2)
{
printf("Error\n");

return (1);
}

total = atoi(argv[1]); /*Converts str to int*/

if (total <= 0)
{
printf("0\n");

return (0);
}

/*Declaring the while*/

while (coins[position] != '\0')

{
if (total >= coins[position])
{
aux = (total / coins[position]);
change += aux;
total -= coins[position] * aux;
}

position++;

}
printf("%d\n", change);
	return (0);
}
