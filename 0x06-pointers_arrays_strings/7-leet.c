#include "main.h"
/**
* leet - encoded into 1337 speak
* @n: input value
* Return: n value
*/

char *leet(char *n)
{
	int i;
	int j;
	char s1[] = "aAeEoOtTlL";
	char sw[] = "4433007711";

	for (i = 0; n[] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (n[i] == s1[j])
			{
				n[i] = s2[j];
			}
		}
	}
	return (n);
}