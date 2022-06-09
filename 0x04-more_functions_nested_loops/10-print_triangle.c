#include "main.h"
/**
 * print_triangle - in triangle shape
 *@size : numbers of #
 *
 *Return: Always 0.
 */
void print_triangle(int size)
{
int a, i, b;
if (size > 0)
{
for (a = 1; a <= size; a++)
{
for (i = a; i < size; i++)
{
_putchar(32);
}
for (b = 1; b <= a; b++)
{
_putchar(35);
}
if (a != size)
_putchar('\n');
}
}
_putchar('\n');
}
