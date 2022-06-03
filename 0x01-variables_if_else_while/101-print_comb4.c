#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i;
int j;
int x;
for (i = 0; i <= 8; i++)
{
j = i + 1;
while (j <= 8)
{

x = j + 1;
while (x <= 9)
{
putchar(i + '0');
putchar(j + '0');
putchar(x + '0');
x++;
if (i == 7 && j == 8)
{
break;
}
putchar(',');
putchar(' ');
}
j++;
}
}
putchar('\n');
return (0);
}
