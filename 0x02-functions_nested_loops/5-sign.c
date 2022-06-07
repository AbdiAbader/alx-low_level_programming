#include "main.h"
/**
 *print_sign -  check for number sign.
 *
 *@n: interger number
 *Return:(-1) for negative (0) for zero (1) positive.
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n < 0)
{
_putchar('-');
return (-1);
}
_putchar(0 + '0');
return (0);
}
