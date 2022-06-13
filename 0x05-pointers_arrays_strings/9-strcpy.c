#include "main.h"
/**
 **_strcpy -  copy string
 *@dest:string will be cpoy to dest
 *@src:all of is stirng will cpoyied
 *Return: void
 */
char *_strcpy(char *dest, char *src)
{
int i;
for (i = 0; *src != '\0'; i++)
{
dest[i] = *src;
src++;
if (*src == '\0')
{
dest[i + 1] = *src;
}
}
return (dest);
}
