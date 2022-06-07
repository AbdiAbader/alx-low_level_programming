#include "main.h"
#include <stdio.h>
/**
 *print_to_98 - print all n to 98.
 *
 *@n: integer number
 *Return: return n to 98.
 */
void print_to_98(int n)
{
int a;
if (n < 98)
{
for (a = n; a <= 98; a++)
{
if (a != n)
printf(", ");
printf("%d", a);
}
}
else if (n > 98)
{
for (a = n; a >= 98; a--)
{
if (a != n)
printf(", ");
printf("%d", a);
}
}
else
printf("%d", n);
printf("\n");
}
