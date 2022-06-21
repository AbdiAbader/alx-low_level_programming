#include "main.h"
/**
 *_pow_recursion - code on power of number times by other number.
 *@x: input integer
 *@y: input integer
 *Return: -1 if y less than 0 return 1 x if y >= 1
 */
int _pow_recursion(int x, int y)
{
if (y < 0)
return (-1);
else if (y == 0)
return (1);
else
return (x * _pow_recursion(x, y - 1));
}
