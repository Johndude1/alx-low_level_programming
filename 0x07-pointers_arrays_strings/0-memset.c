#include "main.h"
/**
 * _memset - fill a block of m,emory with a specified value
 * @s: starting address of memory to be fillled
 * @b: the desired value
 * @n: number of bytes to be changed
 *
 * Return: changed array with new value for n bytes
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; i > 0; i++)

	{
		s[i] = b;
		n--;
	}
	return (s);
}
