#include <stdio.h>
/**
*main - print number to 100 replace number devisible by 3 - fizz and 5 -Buzz.
 *
 *Return: 0 if success
 */
int main(void)
{
int a;
for (a = 1; a <= 100; a++)
{
if ((a % 3) == 0)
{
printf("Fizz ");
continue;
}
if ((a % 5) == 0)
{
printf("Buzz");
continue;
}
printf("%d ",a);
}
printf("\n");
 return (0);
}
