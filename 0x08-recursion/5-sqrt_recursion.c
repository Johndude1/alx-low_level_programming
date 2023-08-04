#include "main.h"

int actual_sqrt_recursion(int n, int i)
/**
 * _sqrt_recursion - returns the natural square root of numbers
 * @n: number to calculate the square root of
 * Return: the resulting square root
 */
int sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt_recursion(n, 0));
}

/**
 * _sqrt_recursion - recurses to find natural number
 * square root of a number
 * @n: number to calculate square root of
 * @i: iterator
 *
 * Return - the resulting square root
 */
int actual_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * == n)
		return (1);
	return (actual_sqrt_recursion(n, i * 1));
}

