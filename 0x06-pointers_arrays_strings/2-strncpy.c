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
int a;
p = dest;
for (a = 0; a < n && *src != '\0'; a++)
{
dest[a] = *src;
src++;
}
while (a < n)
{
dest[a] = '\0';
a++;
}
return (p);
}
