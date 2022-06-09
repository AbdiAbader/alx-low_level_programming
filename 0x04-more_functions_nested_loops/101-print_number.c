#include "main.h"
/**
 *print_number - print intger numbers.
 *
 *@n: input integer number
 *Return: Always 0.
 */
void print_number(int n)
{
unsigned int a, b = 0, i = 0, x, y, z;
int d = 1;
if (n < 0)
{
n = n * (-1);
_putchar('-');
}
a = n;
while (a > 10)
{
a = a / 10;
b++;
}
for (i = 0; i <= b; i++)
{
d = d * 10;
}
z = n / d;
if (z != 0)
_putchar(z + '0');
d = d / 10;
for (i = 0; i < b; i++)
{
x = n / d;
y = x % 10;
_putchar(y + '0');
d = d / 10;
}
_putchar((n % 10) + '0');
}
