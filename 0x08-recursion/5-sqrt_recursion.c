#include "main.h"
/**
 *helpsqrt - solve sqrt solution
 *@x: intger form sqrt function
 *@n: integer from sqrt function
 *Return: squre root or -1 if not
 */
int helpsqrt(long int x, long int n)
{
if (x * x == n)
return (x);
else if (x >= 1)
{
x--;
return (helpsqrt(x, n));
}
else
return (-1);
}
/**
 *_sqrt_recursion - works of finding square root
 *@n: input  integer
 *Return: natuaral square root if not -1
 */
int _sqrt_recursion(long int n)
{
long int x, r;
x = n / 3;
if (n == 1)
return (1);
if (n == 2)
return (4);
r = helpsqrt(x, n);
return (r);
}
