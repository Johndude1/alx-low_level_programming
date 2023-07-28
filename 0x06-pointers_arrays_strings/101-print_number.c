#include "main.h"
/**
* print_numbers - prints numbers chars
* @n: integer parameter
* Return: 0
*/

void print_number(int n)
{
	unsigned int ni;
	ni = n;
	
	if (n < 0)

	{
		_putchar('_');
		ni = -n;
	}
	if (ni / 10 != 0)
	{
		print _number(ni / 10)
	}
	_putchar((n1 % 10) + '0');
}
