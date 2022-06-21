#include "main.h"
/**
 *_print_rev_recursion - print in reverse
 *@s: string input
 *Return: void
 */
void _print_rev_recursion(char *s)
{
if (*s != '\0')
{
s++;
_print_rev_recursion(s);
_putchar(*(s - 1));
}
}
