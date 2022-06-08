#include <stdio.h>
/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
long int s = 0;
long int x = 1, y = 2, f = 0;
while (s <= 4000000)
{
s = x + y;
x = y;
y = s;
if ((x % 2) == 0)
f = f + x;
}
printf("%ld", f);
printf("\n");
return (0);
}

