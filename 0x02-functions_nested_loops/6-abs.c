#include "main.h"
/**
 *_abs - Give  us the absolute value.
 *
 *@n: input interger.
 *Return: the absolute value of the number.
 */
int _abs(int n)
{
if (n >= 0)
return (n);
n = n * -1;
return (n);
}
