#include "main.h"

/**
* append_text_to_file- A function that append text at the end of a file
* @filename: the name of the file
* @text_content: the added content
* Return: 1 if the file exist or -1 if the file does not exist or fails
*/

int append_text_to_file(const char *filename, char *text_content)
{
int file_de;
int nletters;
int rwr;

if (!filename)
return (-1);
file_de = open(filename, O_WRONLY | O_APPEND);
if (file_de == -1)
return (-1);
if (text_content)
{
for (nletters = 0; text_content[nletters]; nletters++)
;
rwr = write(file_de, text_content, nletters);
if (rwr == -1)
return (-1);
}
close(file_de);
return (1);
}
