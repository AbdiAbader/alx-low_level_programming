#include "main.h"
/**
*print_rev - prints in reverse order.
 *@s: input char
 *Return: void
 */
void print_rev(char *s)
{
char *abdi;
int f, count = 0;
abdi = s;
for (f = 0 ; *abdi != '\0'; f++)
{
count++;
abdi++;
}
--abdi;
for (f = 0; f < count; f++)
{
_putchar(*abdi);
--abdi;
}
_putchar('\n');
}
