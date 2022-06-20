#include "main.h"
/**
 *_strspn - return the number
 *@s: string
 *@accept: string that will be checked
 *Return: n
 */
unsigned int _strspn(char *s, char *accept)
{
int i, j, n = 0;
for (i = 0; s[i] != '\0'; i++)
{
if (i == n)
{
for (j = 0; accept[j] != '\0'; j++)
{
if (s[i] == accept[j])
{
n++;
break;
}
}
}
else
return (n);
}
return (n);
}
