#include "main.h"

/**
* char *_strcpy - a function that copies the string pointed to by src
* @dest:will  copy to
* @src: to copy from
* Return: return a string
*/
char *_strcpy(char *dest, char *src)
{
int l = 0;
int x = 0;
while (*(src + l) != '\0')
{
l++;
}
for ( ; x < l ; x++)
{
dest[x] = src[x];
}
dest[l] = '\0';
return (dest);
}
