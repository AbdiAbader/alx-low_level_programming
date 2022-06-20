#include "main.h"
/**
 *_strchr - return the first match address
 *@s: string
 *@c: character
 *Return: Address of the pointer
 */
char *_strchr(char *s, char c)
{
char *p;
while (*s != '\0')
{
if (*s == c)
{
p = s;
return (p);
}
s++;
}
if (*s == c)
{
p = s;
return (p);
}
return (0);
}
