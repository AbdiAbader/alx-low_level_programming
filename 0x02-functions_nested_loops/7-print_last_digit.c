#include "main.h"
/**
 *print_last_digit - print the lst digit of the numbers.
 *
 *@a: input integer number.
 *Return: the last digit.
 */
int print_last_digit(int a)
{
int x;
x = a % 10;
if (x < 0)
{
_putchar(-x + 48);
return (-x);
}
_putchar(x + 48);
return (x);
}
