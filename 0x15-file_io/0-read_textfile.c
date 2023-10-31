#include "main.h"

/**
*read_textfile - this function reads a text file and prints it to POSIX stdo
* @filename: the name of the file to read
* @letters : number of letters it should read and print
* Return: to return the actual number of letters it could read and print
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
int file_de;
ssize_t lenr, lenw;
char *buffer;

if (filename == NULL)
return (0);
file_de = open(filename, O_RDONLY);
if (file_de == -1)
return (0);
buffer = malloc(sizeof(char) * letters);
if (buffer == NULL)
{
close(file_de);
return (0);
}
lenr = read(file_de, buffer, letters);
close(file_de);
if (lenr == -1)
{
free(buffer);
return (0);
}
lenw = write(STDOUT_FILENO, buffer, lenr);
free(buffer);
if (lenr != lenw)
return (0);
return (lenw);
}
