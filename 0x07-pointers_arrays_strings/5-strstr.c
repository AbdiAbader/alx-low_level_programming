#include "main.h"
/**
 *_strstr - return  the address if match with needle
 *@haystack: the source string
 *@needle: the serach string
 *Return: address or null
 */
char *_strstr(char *haystack, char *needle)
{
int i, j, f = 0, l, x;
char *p;
char *w = "NULL";
for (x = 0; needle[x] != '\0'; x++)
l++;
for (i = 0; haystack[i] != '\0'; i++)
{
for (j = f; needle[j] != '\0'; j++)
{
if (haystack[i] == needle[j])
{
if (f == 0)
p = haystack + i;
f++;
break;
}
else
{
f = 0;
break;
}
}
}
if (f == l)
return (p);
else
return (w);
}
