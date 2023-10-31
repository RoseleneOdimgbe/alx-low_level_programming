#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
* check_num - check - string there are digit
* @str: array str
* Return: Always 0 (Success)
*/

int check_num(char *str)

	{
		/*Declaring the variables*/
		unsigned int count;

		count = 0;
		while (count < strlen(str)) /*this counts strings*/
		{
		if (!isdigit(str[count])) /*this checks if str there are digits*/
		{
		return (0);
		}
		count++;
		}
	return (1);
	}

/**
* main - this prints the name of the program
* @argc: this counts arguments
* @argv: the arguments
* Return: Always 0 (Success)
*/

int main(int argc, char *argv[])

{
	/*Declaring the variables*/
		int count;
		int str_to_int;
		int sum = 0;

		count = 1;
		while (count < argc) /*this goes through the whole array*/
	{
		if (check_num(argv[count]))

	{
		str_to_int = atoi(argv[count]); /*ATOI --> this converts string to integer*/

		sum += str_to_int;

	}

		/*Condition if one of the numbers contains symbols that are not digits*/
		else
	{
		printf("Error\n");
		return (1);
	}
	count++;
	}

	printf("%d\n", sum); /*print sum*/

return (0);
}
