#include <stdio.h>
/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
long int s = 0;
long int x, y = 1, f = 0;
for (x = 1; x <= 50; x++)
{
s = f + y;
f = y;
y = s;
if (x != 1)
printf(", ");
printf("%ld", s);
}
printf("\n");
return (0);
}

