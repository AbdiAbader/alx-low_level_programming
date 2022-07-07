#include "variadic_functions.h"
/**
 *print_numbers - prints all arguments
 *@separator: separator numbers
 *@n: integers
 *Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i = 0;
va_list args;
if (n == 0)
return;
va_start(args, n);
while (i < n)
{
printf("%i", va_arg(args, int));
if (i != n - 1)
printf("%s ", separator);
i++;
}
printf("\n");
va_end(args);
}
