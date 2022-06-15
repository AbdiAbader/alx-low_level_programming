#include "main.h"
/**
 *_strncpy - copys to n length
 *@dest:destination of copy
 *@src:source string 
 *@n: integer length of copy
 *Return: O for success
 */
char *_strncpy(char *dest, char *src, int n)
{
char *p;
int i;
p = dest;
for (i = 0; i < n; i++)
{
if (*src != '\0')
{
*dest= *src;
src++;
dest++;
}
}
return (p);
}
