#include "variadic_functions.h"
/**
 *sum_them_all - summ allls passed arguments
 *@n: number of args
 *Return: 0 if n = 0  otherwise sum
 */
int sum_them_all(const unsigned int n, ...)
{
va_list args;
unsigned int i = 0, sum = 0;
if (n == 0)
return (0);
va_start(args, n);
while (i < n)
{
sum += va_arg(args, int);
i++;
}
return (sum);
}
