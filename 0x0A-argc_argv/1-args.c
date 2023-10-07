#include <stdio.h>
#include "main.h"

/**
* main : A function that prints the number of arguments passed to the program
* @argc: number of arguments
* @argv: array of arguments
* return: Always (0) on success
*/
int main(int argc, char *argv[])
{

printf("%d\n", argc - 1);

return (0);
}
