#include "main.h"
/**
 *print_square - print square with *.
 *@size: input integer.
 *Return: void 
 */
void print_square(int size)
{
int i, j;
if (size > 0)
{
for (i = 1; i <= size; i++)
{
for (j = 1; j <= size; j++)
{
_putchar(35);
}
_putchar('\n');
}
}
_putchar('\n');
}
