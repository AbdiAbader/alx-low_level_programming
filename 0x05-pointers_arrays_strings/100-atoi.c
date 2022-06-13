#include "main.h"
/**
 *_atoi - convert characters to integers
 *@s: character input
 *Return: 0 if not intgers .
 */
int _atoi(char *s)
{
int a, num = 0, sign = 1;
if (*s == '-')
{
sign *= -1;
}
if (*s >= 48 && *s <= 57)
{
for (i = 0; *s != '\0'; i++)
{
if (*s >= 48 && *s <= 57)
{
num = num * 10 + *s - 48;
s++;
}
else
break;
}
return (num *sign);
}
else
return (0);
}
