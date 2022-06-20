#include "main.h"
/**
 *_strpbrk - return the address of the first meatching character
 *@s: string
 *@accept: the string to be checked with s
 *Return: address  of the matching char
 */
char *_strpbrk(char *s, char *accept)
{
int i, j;
char *p;
for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; accept[j] != '\0'; j++)
{
if (s[i] == accept[j])
{
p = &s[i];
return (p);
}
}
}
return (0);
}
