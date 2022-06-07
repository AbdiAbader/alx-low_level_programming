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
if (multi > 9)
{
ab1 = multi / 10;
di1 = multi % 10;
_putchar(ab1 + '0');
_putchar(di1 + '0');
}
else
{
_putchar(multi + '0');  
}
if (di != 9)
{
_putchar(',');
_putchar(' ');
}
}
_putchar('\n');
}
}
