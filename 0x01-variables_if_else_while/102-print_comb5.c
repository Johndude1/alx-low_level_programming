#include <stdio.h>
/**
 *
 * main - prints all possible combinations of a pair of two numbers,  without repetition
 * 
 * return 0 success
 */
int main()
{
  int i, j;
	for (i=0; i<=99; i++)
	
 {
for (j=0; j<=99; j++)

	{ 	
	if i < j && i !=j)
	{ 
	putchar((i / 10) + '0');
	putchar((i % 10) + '0');
	putchar(' '); 
	putchar((j / 10) + '0');
	putchar((j % 10) + '0');
	if (i != 98 || j != 99)
	{ 
		putchar(',');
		putchar(' ');
		}
		}
		}
		}	
		putcha('\n)
		return (0);
}