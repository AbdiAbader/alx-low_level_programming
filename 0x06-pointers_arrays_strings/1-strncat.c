#include "main.h"
/**
 *_strncat - append to n length to dest
*@dest: destination string
*@n: append to n length
*@src:source
*Return: dest
*/
char *_strncat(char *dest,  char *src, int n)
{
int a, b;
char *p;
p = dest;
for (a = 0; *dest != '\0'; a++)
dest++;
for (b = 0; b < n && *src != '\0'; b++)
{
*dest = *src;
dest++;
src++;
}
dest = '\0';
return (p);
}
