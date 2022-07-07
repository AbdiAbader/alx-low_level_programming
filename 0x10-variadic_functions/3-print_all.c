#include "variadic_functions.h"
/**
 *print_all - print s all argumetns if matchs withs format
 *@format: chars
 *Return: void
 */
void print_all(const char * const format, ...)
{
char *pe, *se = "";
int i = 0;
va_list args;
va_start(args, format);
if (format)
{
while (format[i])
{
switch (format[i])
{
case 'c':
printf("%s%c", se, va_arg(args, int));
break;
case 'i':
printf("%s%d", se, va_arg(args, int));
break;
case 'f':
printf("%s%.6f", se, va_arg(args, double));
break;
case 's':
pe = va_arg(args, char *);
if (pe == NULL)
pe = "(nil)";
printf("%s%s", se, pe);
break;
default:
i++;
continue;
}
i++;
se = ", ";
}
}
printf("\n");
va_end(args);
}
