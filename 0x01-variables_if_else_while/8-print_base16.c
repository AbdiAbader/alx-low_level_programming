#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int base16;
for (base16 = 0; base16 < 10 ; base16++)
{
putchar(base16 + '0');
}
for (base16 = 97; base16 <= 102; base16++)
{
putchar(base16);
}
putchar('\n');
return (0);
}
