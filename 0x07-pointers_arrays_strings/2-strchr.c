#include "main.h"
/**
 *_strchr - return the first match address
 *@s: string
 *@c: character
 *Return: Address of the pointer
 */
char *_strchr(char *s, char c)
{
char *NULL = '\0';
char *p;
while (s)
{
if (*s == c)
{
p = s;
return (p);
}
s++;
}
return (NULL);
}
