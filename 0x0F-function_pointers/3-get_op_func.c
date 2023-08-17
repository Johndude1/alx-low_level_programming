#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - Returns the sum of the two numbers
 * @a: the first number
 * @b: the second number
 *
 * Return: The sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Retutns the diffrences of two numbers
 * @a: The first number
 * @b: the second number
 *
 * Return: the differences of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Returns the product of two numbers
 * @a: the first number
 * @b: the second number
 *
 * Return: the product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - Returns the division of two numbers
 * @a: the first number
 * @b: the second number
 *
 * Return: the quotient of a and b
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mid - Returns the remainder of the divison of two numbers
 * @a: the first number
 * @b: the second number
 *
 * Return: the remainder of a and b
 */
int op_mod(int a, int b)
{
	return(a % b);
}
