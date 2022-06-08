#include "main.h"
/**
 *print_times_table  - print time table
 *
 *Return: printing time table
 */
void print_times_table(int n)
{
int ab, di, multi;
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
_putchar((multi / 10) + '0');
_putchar((multi % 10) + '0');
}
if (multi > 99)
{
_putchar((multi / 100) + 48);
_putchar(((multi / 10) / 10) + 48);
_putchar((multi % 10) + 48);
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
