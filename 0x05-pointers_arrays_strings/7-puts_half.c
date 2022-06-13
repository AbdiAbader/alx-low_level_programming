#include "main.h"
/**
 *puts_half - prints the last half of the string.
 *@str: string input
 *Return: void
 */
void puts_half(char *str)
{
int ab = 0, i;
for (i = 0; *str != '\0'; i++)
{
ab++;
str++;
}
(ab % 2 == 0) ? (str -= (ab / 2)) : (str -= (ab - 1) / 2);
for (i = 0 ; (ab % 2 == 0 ? (i < ab / 2) : (i < (ab - 1) / 2)); i++)
{
_putchar(*str);
str++;
}
_putchar('\n');
}
