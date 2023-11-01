#include "main.h"

void check_IO_stat(int stat, int fd, char *filename,  char node);

/**
*main- a function that copies the content of one file to another
* @argc:  argument count
* @argv: arguments passed
* Return: return 1 on sucvess otherwise exit
*/

int main(int argc, char *argv[])
{
int src, dest, n_read = 1024, wrote, close_src, close_dest;
unsigned int node = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
char buffer[1024];

if (argc != 3)
{
dprintf(STDERR_FILENO, "%s", "Usage| cp file_from file_to\n");
exit(97);
}
src = open(argv[1], O_RDONLY);
check_IO_stat(src, -1, argv[1], 'o');
dest = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, node);
check_IO_stat(dest, -1, argv[2], 'w');
while (n_read == 1024)
{
n_read = read(src, buffer, sizeof(buffer));
if (n_read == -1)
check_IO_stat(-1, -1, argv[1], 'o');
wrote = write(dest, buffer, n_read);
if (wrote == -1)
check_IO_stat(-1, -1, argv[2], 'w');
}
close_src = close(src);
check_IO_stat(close_src, src, NULL, 'C');
close_dest = close(dest);
check_IO_stat(close_dest, dest, NULL, 'C');
return (0);
}

/**
* check_IO_stat - a function that checks if a file can be opened or closed
* @stat: a file discriptor of file to be opened
* @filename: the name of the file
* @node: the opening or closing
* @fd: a file descriptor
* Return: void
*/

void check_IO_stat(int stat, int fd, char *filename, char node)
{
if (node == 'C' && stat == -1)
{
dprintf(STDERR_FILENO, "Error: can't close fd %d\n", fd);
exit(100);
}
else if (node == 'o' && stat == -1)
{
dprintf(STDERR_FILENO, "Error: can't read from file %s\n", filename);
exit(98);
}
else if (node == 'w' && stat == -1)
{
dprintf(STDERR_FILENO, "Error: can't write to %s\n", filename);
exit(99);
}
}
