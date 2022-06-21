#include "main.h"
/**
 *_puts_recursion - recursively prints in style of putchar
 *@s: input string
 *Return: void
 */
void _puts_recursion(char *s)
{
if (*s != '\0')
{
_putchar(*s);
s++;
_puts_recursion(s);
}
else
_putchar('\n');
}
