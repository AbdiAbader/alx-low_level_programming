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
if (*s == '-')
{
sign *= -1;
s++;
}

for (a = 0; *s != '\0'; a++)
{
if (*s == '-' || *s == '+')
continue;
if (*s >= 48 && *s <= 57)
{
num = num * 10 + *s - 48;
s++;
if (*s >= 48 && *s <= 57)
continue;
else
break;
}
}
return (num *sign);
}
else
return (0);
}
