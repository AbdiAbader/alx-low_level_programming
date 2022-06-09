#include "main.h"
/**
 *print_number - print intger numbers.
 *
 *@n: input integer number
 *Return: null.
 */
void print_number(int n)
{
unsigned int a, c, i = 1;
if (n < 0)
{
c = n * (-1);
_putchar('-');
}
else
{
c = n;
}
a = c;
while (a > 9)
{
a = a / 10;
i = i * 10;
}
for (; i >= 1 ; i /= 10)
{
_putchar(((c / i) % 10) + '0');
}
}
