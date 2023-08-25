#include "variadic_functions"

/**
 * prints_numners - prints numbers given as parameters
 * @separators:strings to be printed between numbers
 * @n: number of argumemts passed into the function
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list list;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		if (!separator)
printf("%d", va_arg(list, int);
		else if (separator || i == 0)

