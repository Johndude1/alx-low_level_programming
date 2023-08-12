#include "main.h"
#include <stdio.h>
#include <stdlib.h>

int find_len(char *str);
char *create_xarray(int size);
char *iterate_zeroes(char *str);
void get_prod(char *prod, char *mult, int digit, int zeroes);
void add_must(char *final_prod, char *next_prod, int next_len);

/**
 * find_len - finds the length of a string.
 * @str: The string to be measured.
 *
 * Return: The length of the string.
 */
int find_len(char *str)
{
	int len = 0;

	while (*str++)
		len++;

	return (len);
}
/**
 * crete_xarray _- creates an array of chars and initializes it with the character 'x'. adds a terminating null byte.
 * @size: the size of the array to be initlized.
 * Description: if there is insufficient space, the function exits with a status of 98.
 * Return: A pointer to array.
 */
char *create_xarray(int size)
{
	char *array;
	int index;

	array = malloc(sizeof(char) * size);

	if (array == NULL)
		exit(98);

	for (index = 0; index < (size -1); index++)
		array[index] = 'x';
array[index] = '\0';

reurn (array);
/**
 * iterate_zeroes - Iterates through a string of numbers containing leading zeros until it hits a non zero number.
 * @str: The string of numbers to be iterate though.
 *
 * Return: A pointer to the next non-zero element.
 */
char *iterate_zeroes(char *str)
{
	while (*str && *str == '0')
		str++;
	return (str);
}
/**
 * get_digit - converts a digit character to a corresponding int.
 * @c: The character to be conveted.
 *
 * Description: If c is a non-digit, the function exits with a status of 98.
 * Return: the converted int.
 */
int get_digit(char c)
{
	int digit = c - '0';

	if (digit < 0 || digit > 9)
	{
		printf("Error\n");
		exit(98);
	}
	return (digit);
}
/**
 *
