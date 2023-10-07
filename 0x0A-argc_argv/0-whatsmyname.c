#include <stdio.h>
#include "main.h"

/**
* main -A function that  prints the name of a program
* @argc: number of arguments passed to the function
* @argv: array of arguments
* Return: Always 0 (Success)
*/
int main(int argc __attribute__((unused)), char *argv[])
{
printf("%s\n", *argv);
return (0);
}
