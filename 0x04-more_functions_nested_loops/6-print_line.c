#include "main.h"
/**
 *print_line - printline with _
 *@n: input integer .
 *
 *Return: void.
 */
void print_line(int n)
{
int i;
if (n > 0)
{
for (i = 0; i < n; i++)
{
_putchar(95);
}

}
_putchar('\n');
}
