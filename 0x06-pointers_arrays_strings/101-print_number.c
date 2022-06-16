#include "main.h"
/**
 *print_number - print every number
 *@n: input integer
 *Return: void
 */
void print_number(int n)
{
unsigned int i, a, c = 1;
if (n < 0)
{
n = n * -1;
_putchar('-');
}
a = n;
while (a > 9)
{
a = a / 10;
c = c * 10;
}
for (i = c; i >= 1; i = i / 10)
_putchar(((n / i) % 10) + '0');

}
