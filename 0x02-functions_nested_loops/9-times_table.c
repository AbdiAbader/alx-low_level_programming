#include "main.h"
/**
 *times_table - print time table
 *
 *Return: printing time table
 */
void times_table(void)
{
int ab, di, multi, ab1, di1;
for (ab = 0; ab <= 9; ab++)
{
for (di = 0; di <= 9; di++)
{
multi = ab * di;
if (di != 0)
{
_putchar(',');
_putchar(32);
}
if (multi > 9)
{
ab1 = multi / 10;
di1 = multi % 10;
_putchar(ab1 + 48);
_putchar(di1 + 48);
}
else
{
if (di != 0)
_putchar(32);
_putchar(multi + '0');
}
}
_putchar('\n');
}
}
