#include "main.h"

/**print_numbers - print 0 - 9
 * Return: 0
 */

void print_number(void)
{
	char c;
	for (c = '0'; c <= '9'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
