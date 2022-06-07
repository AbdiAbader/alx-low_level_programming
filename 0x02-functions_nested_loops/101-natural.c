#include <stdio.h>
/**
* main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
int a, s;
for (a = 1; a < 1024; a++)
{
if ((a % 3) == 0 || (a % 5) == 0)
s = s + a;
}
printf("%i\n", s);
return (0);
}
