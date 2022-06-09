#include "main.h"
/**
*more_numbers - print numbers from 0 -14 ten times.
 *
*Return: void.
 */
void more_numbers(void)
{
int i, j, c;
for (i = 0; i < 10; i++)
{
for (j = 0; j < 15; j++)
{
if (j <= 9)
{
c = j;
c = c * 10;
}
else
c = j;
_putchar((c / 10) + '0');
if (j > 9)
_putchar((j % 10) + '0');
}
_putchar('\n');
}
}
