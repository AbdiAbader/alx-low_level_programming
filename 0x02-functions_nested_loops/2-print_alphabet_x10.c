#include "main.h"
/**
 *print_alphabet_x10 - print  ten times in lower case.
 *
 *Return: Always  (success)
 */
void print_alphabet_x10(void)
{
int alpha, i;
for (i = 0; i <= 9; i++)
{
for (alpha = 97; alpha <= 122; alpha++)
{
_putchar(alpha);
}
_putchar('\n');
}
}
