#include "main.h"
/**
 *_strstr - return  the address if match with needle
 *@haystack: the source string
 *@needle: the serach string
 *Return: address or null
 */
char *_strstr(char *haystack, char *needle)
{
char *N = '\0';
int i, j, f = 0, l = 0;
char *p;
for (j = 0; needle[j] != '\0'; j++)
l++;
for (i = 0; haystack[i] != '\0'; i++)
{
for (j = f; needle[j] != '\0'; j++)
{
if (haystack[i] == needle[j])
{
if (f == 0)
p = &haystack[i];
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
return (N);
}
