#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int x;
int y;
int i;
int j;
int c;

for (x = 0; x < 10; x++)
{ 
for (y = 0; y < 10; y++)
{
for (i = 0; i < 10; i++)
{
for ( j = c ; j < 10; j++)
{
putchar(x + '0');
putchar(y + '0');
putchar(' ');
putchar(i + '0');
putchar(j + '0');
if ( x == 9 && y == 8)
{
continue;
}
putchar(',');
putchar(' ');
}
c=0;
}
}
}
return (0);
}
