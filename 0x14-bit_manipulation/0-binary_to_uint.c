#include "main.h"
/**
*binary_to_uint - binary to unsigned
*@b: binary number.
*Return: number or 0
*/
unsigned int binary_to_uint(const char *b)
{
const char *c = b;
unsigned long int base = 1, num = 0;
int i = 0;
if (c == NULL)
return (0);
while (c[i] != '\0')
i++;
while (--i >= 0)
{
if (c[i] != '0' && c[i] != '1')
return (0);
num += ((c[i] - 48) * base);
base = base * 2;
}
return (num);
}
