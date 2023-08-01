#include "main.h"
/**
 * _strspn - Gets the length of a prefix
 * @s: The string to be searched
 * @accept: The prefix to be measured
 * Returne: The number of bytes in search which consist of only of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int bytes = 0;
	int index;

	while (*s)
	{
		for (index = 0; accept[index]; index++)
		{
			if (*s == accept[index])
			{
				bytes++;
				break;
			}
			else if ([accept++] == '\0')
				return (bytes);
		}
		s++;
	}
	return (bytes);
}
