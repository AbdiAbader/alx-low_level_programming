#include "main.h"
/**
 *print_times_table  - print time table
 *
 *Return: printing time table
 */
void print_times_table(int n)
{
int ab, di, multi, ab1, di1, ab2, di2;
if (n >= 0 && n < 15)
{
for (ab = 0; ab <= n; ab++)
{
for (di = 0; di <= n; di++)
{
multi = ab * di;
if (di != 0)
{
_putchar(',');
_putchar(32);
}
if (multi > 9 && multi <= 99)
{
_putchar(32);
ab1 = multi / 10;
di1 = multi % 10;
_putchar(ab1 + '0');
_putchar(di1 + '0');
}
if (multi > 99)
{
di2 = multi / 100;
ab2 = multi / 10;
ab1 = ab2 % 10;
di1 = multi % 10;
_putchar(di2 + 48);
_putchar(ab1 + 48);
_putchar(di1 + 48);
}
else if ( multi <= 9)
{
if (di != 0)
{
_putchar(32);
_putchar(32);
}
_putchar(multi + '0');
}
}
_putchar('\n');
}
}
}
