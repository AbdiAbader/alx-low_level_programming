#include "main.h"
/**
 *leet - encodes letters
 *@s: the source
 *Return: the encode source
 */
char *leet(char *s)
{
int i;
char *a;
char le[] = {65, 97, 69, 101, 76, 108, 79, 111, 84, 116};
int et[] = {52, 52, 51, 51, 49, 49, 48, 48, 55, 55};
a = s;
while (*s != '\0')
{
for (i = 0 ; i < 10; i++)
{
if (*s == le[i])
{
*s = et[i];
continue;
}
}
s++;
}
return (a);
}
