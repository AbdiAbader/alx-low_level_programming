#include "main.h"
/**
 *_atoi - convert characters to integers
 *@s: character input
 *Return: 0 if not intgers .
 */
int _atoi(char *s)
{
int a,  sign = 1;
unsigned int num = 0;
for (a = 0; *s != '\0'; a++)
{
if (*s == '-')
{
sign *= -1;
s++;
continue;
}
if (*s >= 48 && *s <= 57)
{
num = num * 10 + *s - 48;
s++;
if (*s < 48 || *s > 57)
return (num *sign);
}
else
s++;
}
return (0);
}
