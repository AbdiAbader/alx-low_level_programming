#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int a, b;

for (a = 0; a <= 99; a++)
{
for (b = a; b <= 99; b++)
{
if (a != b)
{
if (a != 0 || b != 1)
{
putchar(',');
putchar(' ');
}
putchar(a / 10 + '0');
putchar(a % 10 + '0');
putchar(' ');
putchar(b / 10 + '0');
putchar(b % 10 + '0');
}
}
}
putchar('\n');
return (0);
}
