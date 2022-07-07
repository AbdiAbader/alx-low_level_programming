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
va_start(args, n);
while (i < n)
{
printf("%i", va_arg(args, int));
if (i != n - 1 && separator != NULL)
printf("%s", separator);
i++;
}
printf("\n");
va_end(args);
}
