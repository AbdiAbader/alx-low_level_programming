#include "variadic_functions.h"
/**
 *print_strings - prints all string
 *@separator: separator of strings
 *@n: number of args
 *Return: Void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int i = 0;
va_list args;
va_start(args, n);
while (i < n)
{
printf("%s", va_arg(args, char *));
if (i != n - 1 && separator != NULL)
printf("%s", separator);
i++;
}
printf("\n");
va_end(args);
}
