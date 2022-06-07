#include "main.h"
/**
 *jack_bauer - print every minute of the hours.
 *
 *
 *Return: all minutes of hours.
 */
void jack_bauer(void)
{
int ab, di, ab1, ab2, di1, di2;
for (ab = 0; ab < 24 ; ab++)
{
for (di = 0; di < 60; di++)
{
ab1 = ab / 10;
ab2 = ab % 10;
_putchar(ab1 + '0');
_putchar(ab2 + '0');

_putchar(':');
di1 = di / 10;
di2 = di % 10;
_putchar(di1 + '0');
_putchar(di2 + '0');
_putchar('\n');
}
}
}
