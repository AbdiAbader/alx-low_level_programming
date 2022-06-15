#include "main.h"
/**
 *_strcmp - compares strings.
 *@s1:string one
 *@s2:string two
 *Return: the difference between the first non identical letter.
 */
int _strcmp(char *s1, char *s2)
{
int i, d;
for (i = 0; *s1 != '\0'; i++)
{
if (*s1 == *s2)
{
s1++;
s2++;
}
else
{
d = *s1 - *s2;
return (d);
}
}
return (0);
}
