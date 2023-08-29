#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * check_num - check - string  there are digit
 * @str: array str
 *
 * Return: Always 0 (success)
 */

int check_num(char *str)
{
	/* declaring variable*/
	unsigned int count;

	count = 0;

	while (count < strlen(str)) /* count string */
	{
		if (!isdigit(str[count])) /*check if str there are digit */
		{
			return (0);
		}
		count++;
	}
	return (1);
}

/*
* main: function to print the name of the program
* @age: count arguments
* @argv: arguments
*
* return: always 0 (success)
*/
int main(int argc, char *argv[])
{
	/*declaring variables */
	int count;
	int str_to_int;
	int sum = 0;
	{
		count = 1;
		while (count < argc) /* goes through the whole array */
		{
			if (check_num(argv[count]))
			{
				str_to_int_atoi(argv[count]); /*atoi convert string to int */
				sum += str_to_int;
			}
			/* condition if one of the numbers contains symbols that are not digit */
			else
			{
				printf("error");
				return (1);
			}
			count++;
		}

		printf("%d\n", sum);
		/* print sum */

		return (0);
}
