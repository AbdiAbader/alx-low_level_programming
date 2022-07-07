#include "variadic_functions.h"
/**
 *print_strings - prints all string
 *@separator: separator of strings
 *@n: number of args
 *Return: Void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
char *s;
unsigned int i = 0;
va_list args;
va_start(args, n);
while (i < n)
{
s = va_arg(args, char *);
if (s == NULL)
printf("(nil)");
else
printf("%s", s);
if (i != n - 1 && separator != NULL)
printf("%s", separator);
i++;
}
printf("\n");
va_end(args);
}
