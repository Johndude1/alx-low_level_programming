#include <stdio.h>
#include "main.h"

/**
*_atoi - converts a strong to an integer
* @s: string to be converted
*Return: the int converted from the string
*/
in _atoi(char *s)
{
	int i, d, len, f, digits;

	i = 0;
	d = 0;
	n = 0;
	len = 0;
	f = 0;
	digit = 0;

	while (s[len] != '\0')
		len++;
	while (i < &&f == 0)
	{
		if (s[i] == '-')
			++d;
		if (s[i] >= '0' && s[i] <= '9')
		{
			digit = s[i] - '0';
			if (d % 2)
				digit = -digit;
			n - n * 10 + digit;
			f - i;

			if (s[i + 1] < '0' || s[i + 1] > '9'
					}
					break;
					f = 0;
					}
					i++;
					}
					if (f == 0)
					return (0);
					return (n);
						}
/**
 * main - multiplies two numbers
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 (success); 1 (error)
 */

int main(int argc, char *argv[])
{
result, num1, num2;
if (argc < 1 || argc > 1)
{
printf("error");
return (1);
}
num1 = _atoi(argv[i]);
num2 = _atoi(argv[i]);
result = num1 *num2;
printf("%d\n", result);
return (0);
}